//metadoc TrivalObject copyright Your Name Here
//metadoc TrivalObject license BSD revised
//metadoc TrivalObject category Example
/*metadoc TrivalObject description
Describe your addon here.
*/

#include "IoState.h"
#include "IoRenderMan.h"
#include "IoList.h"
#include "IoNumber.h"

#include <iostream>

#define DATA(self) ((IoRenderManData*)IoObject_dataPointer(self))

// _tag makes an IoTag for the bookkeeping of names and methods for this proto
IoTag *IoRenderMan_newTag(void *state)
{
	// first allocate a new IoTag
	IoTag *tag = IoTag_newWithName_("RenderMan");

	// record this tag as belonging to this VM
	IoTag_state_(tag, state);

	// give the tag pointers to the _free, _mark and _rawClone functions we'll need to use
	IoTag_freeFunc_(tag, (IoTagFreeFunc *)IoRenderMan_free);
	IoTag_markFunc_(tag, (IoTagMarkFunc *)IoRenderMan_mark);
	IoTag_cloneFunc_(tag, (IoTagCloneFunc *)IoRenderMan_rawClone);
	return tag;
}

// _proto creates the first-ever instance of the prototype 
IoObject *IoRenderMan_proto(void *state)
{
	// First we allocate a new IoObject
	IoRenderMan *self = IoObject_new(state);

	// Then tag it
	IoObject_tag_(self, IoRenderMan_newTag(state));

	// Setup the data pointer
	IoObject_setDataPointer_(self, new IoRenderManData);
	RiBegin("test.rib");
	DATA(self)->riContext = RiGetContext();

	// then register this proto generator
	IoState_registerProtoWithFunc_(reinterpret_cast<IoState*>(state), self, IoRenderMan_proto);

	// and finally, define the table of methods this proto supports
	// we just have one method here, returnSelf, then terminate the array
	// with NULLs
	{
		IoMethodTable methodTable[] = {
		{"riWorldBegin", IoRenderMan_riWorldBegin},
		{"riWorldEnd", IoRenderMan_riWorldEnd},
		{"riSphere", IoRenderMan_riSphere},
		{NULL, NULL},
		};
		IoObject_addMethodTable_(self, methodTable);
	}

	return self;
}

// _rawClone clones the existing proto passed as the only argument
IoObject *IoRenderMan_rawClone(IoRenderMan *proto)
{
	IoObject *self = IoObject_rawClonePrimitive(proto);
	IoObject_setDataPointer_(self, new IoRenderManData);
	RiBegin("test.rib");
	DATA(self)->riContext = RiGetContext();
	// This is where any object-specific data would be copied
	return self;
}

// _new creates a new object from this prototype
IoObject *IoRenderMan_new(void *state)
{
	IoObject *proto = IoState_protoWithInitFunction_(reinterpret_cast<IoState*>(state), IoRenderMan_proto);
	return IOCLONE(proto);
}

// _mark is called when this proto is marked for garbage collection
// If this proto kept references to any other IoObjects, it should call their mark() methods as well.
IoObject *IoRenderMan_mark(IoRenderMan* self)
{
	return self;
}

// _free defines any cleanup or deallocation code to run when the object gets garbage collected
void IoRenderMan_free(IoRenderMan *self)
{
	// free dynamically allocated data and do any cleanup
	RiContext(DATA(self)->riContext);
	RiEnd();
	free(IoObject_dataPointer(self));
}


IoRenderManParameterList* IoRenderMan_getParameterList(IoObject* self, IoObject* locals, IoMessage* m, int startArg, int numExtraArgs)
{
	IoRenderManParameterList* plist = new IoRenderManParameterList;
	plist->count = 0;
	plist->tokens = NULL;
	plist->values = NULL;

	IoRenderManData* data = DATA(self);

	// Check the paramlist has been passed as a set of extra arguments to the function, name/value
	// pairs.
	if(numExtraArgs > 1 && (numExtraArgs&1) == 0)
	{
		int arg = startArg;
		int numTokens = numExtraArgs/2;
		plist->tokens = new RtToken[numTokens];
		plist->values = new RtPointer[numTokens];
		plist->count = numTokens;
		for(int tokenIndex = 0; tokenIndex < numTokens; ++tokenIndex, arg+=2)
		{
			try
			{
				const char* token = IoMessage_locals_cStringArgAt_(m, locals, arg);
				Aqsis::CqPrimvarToken tok = data->tokenDict.parseAndLookup(token);
				IoObject *values = IoMessage_locals_valueArgAt_(m, locals, arg+1);
				// Now process the token and prep the value data accordingly.
				switch(tok.type())
				{
					case Aqsis::type_float:
					{
						if(tok.count() == 1)
						{
							if(ISLIST(values))
							{
								List *list = IoList_rawList(values);
								int size = List_size(list);
								RtFloat* riValues = new RtFloat[size];
								for(int i = 0; i < size; ++i)
								{
									IoNumber* num = reinterpret_cast<IoNumber*>(List_at_(list, i));
									if(!ISNUMBER(num))
										IoState_error_(IOSTATE, m, "Parameter list item #%i must be a Number", i);
									riValues[i] = IoNumber_asDouble(num);
								}
								plist->tokens[tokenIndex] = token;
								plist->values[tokenIndex] = riValues;
							}
							else if(ISNUMBER(values))
							{
								RtFloat* riValues = new RtFloat[1];
								riValues[0] = IoNumber_asDouble(values);
								plist->tokens[tokenIndex] = token;
								plist->values[tokenIndex] = riValues;
							}
							else
							{
								IoState_error_(IOSTATE, m, "Parameter list expected list(Number), or Number for token %s", token);
							}
						}
						break;
					}
					case Aqsis::type_integer:
					case Aqsis::type_bool:
					case Aqsis::type_string:
					case Aqsis::type_triple:
					case Aqsis::type_point:
					case Aqsis::type_normal:
					case Aqsis::type_vector:
					case Aqsis::type_color:
					case Aqsis::type_hpoint:
					case Aqsis::type_matrix:
					case Aqsis::type_sixteentuple:
					case Aqsis::type_void:
					case Aqsis::type_invalid:
						break;
				}
			} 
			catch(Aqsis::XqValidation& err)
			{
				IoState_error_(IOSTATE, m, "%s %s", err.description(), err.what());
			}
		}
	}

	return plist;
}

void IoRenderMan_freeParameterList(IoRenderManParameterList* plist)
{
	// TODO: need to clear the values arrays and tokens when it's all working.
	delete(plist);
}


IoObject *IoRenderMan_riWorldBegin(IoRenderMan *self, IoObject *locals, IoMessage *m)
{
	RiContext(DATA(self)->riContext);
	RiWorldBegin();
	return self;
}

IoObject *IoRenderMan_riWorldEnd(IoRenderMan *self, IoObject *locals, IoMessage *m)
{
	RiContext(DATA(self)->riContext);
	RiWorldEnd();
	return self;
}

IoObject *IoRenderMan_riSphere(IoRenderMan *self, IoObject *locals, IoMessage *m)
{
	// Get the arguments from the message.
	RtFloat radius = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat zmin = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat zmax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat thetamax = IoMessage_locals_doubleArgAt_(m, locals, 3);

	// Check for any parameterlist.
	IoRenderManParameterList* plist = NULL;
	if(IoMessage_argCount(m) > 4)
		plist = IoRenderMan_getParameterList(self, locals, m, 4, IoMessage_argCount(m) - 4);

	// Ensure we're in the right context
	RiContext(DATA(self)->riContext);
	// ...and run the Ri procedure.
	RiSphereV(radius, zmin, zmax, thetamax, plist->count, plist->tokens, plist->values);
	return self;
}
