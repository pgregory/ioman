//metadoc TrivalObject copyright Your Name Here
//metadoc TrivalObject license BSD revised
//metadoc TrivalObject category Example
/*metadoc TrivalObject description
Describe your addon here.
*/

extern "C" {

#include "IoState.h"
#include "IoObject.h"
#include "IoList.h"
#include "IoMap.h"
#include "IoNumber.h"

}

#include "IoRenderMan.h"

#include <iostream>

#define DATA(self) ((IoRenderManData*)IoObject_dataPointer(self))

void IoRenderMan_getPointArgument(IoMessage* m, IoObject* locals, int index, RtPoint& value);
void IoRenderMan_getMatrixArgument(IoMessage* m, IoObject* locals, int index, RtMatrix& value);
void IoRenderMan_getBoundArgument(IoMessage* m, IoObject* locals, int index, RtBound& value);
void IoRenderMan_getParameterList(IoObject* self, IoObject* locals, IoMessage* m, int startArg, int numExtraArgs, IoRenderManParameterList& plist);
#include "IoRenderManMethods.inl"

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
	{
#	    include "IoRenderManSignatures.inl"
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


void IoRenderMan_getPointArgument(IoMessage* m, IoObject* locals, int index, RtPoint& value)
{
	IoObject* ioValue = IoMessage_locals_valueArgAt_(m, locals, index);
//	IOASSERT(ISVECTOR(ioValue), "Point or Color type value must be a Vector");
	UArray* ioVector = IoSeq_rawUArray(ioValue);
//	IOASSERT(UArray_size(ioVector) >= 3, "Point or Color type value must be a Vector with at least 3 elements");
	value[0] = UArray_doubleAt_(ioVector, 0);
	value[1] = UArray_doubleAt_(ioVector, 1);
	value[2] = UArray_doubleAt_(ioVector, 2);
}

void IoRenderMan_getMatrixArgument(IoMessage* m, IoObject* locals, int index, RtMatrix& value)
{
	IoObject* ioValue = IoMessage_locals_valueArgAt_(m, locals, index);
//	IOASSERT(ISVECTOR(ioValue), "Matrix type value must be a Vector");
	UArray* ioVector = IoSeq_rawUArray(ioValue);
//	IOASSERT(UArray_size(ioVector) >= 16, "Matrix type value must be a Vector with at least 16 elements");
	for(int i = 0; i < 4; ++i)
		for(int j = 0; j < 4; ++j)
			value[i][j] = UArray_doubleAt_(ioVector, (i*4)+j);
}

void IoRenderMan_getBoundArgument(IoMessage* m, IoObject* locals, int index, RtBound& value)
{
	IoObject* ioValue = IoMessage_locals_valueArgAt_(m, locals, index);
//	IOASSERT(ISVECTOR(ioValue), "Bound type value must be a Vector");
	UArray* ioVector = IoSeq_rawUArray(ioValue);
//	IOASSERT(UArray_size(ioVector) >= 6, "Bound type value must be a Vector with at least 6 elements");
	for(int i = 0; i < 6; ++i)
		value[i] = UArray_doubleAt_(ioVector, i);
}

RtFloat* IoRenderMan_getFloatParameter(Aqsis::CqPrimvarToken& tok, IoObject* values)
{
	// If the values have been provided in a list.
	if(ISLIST(values))
	{
		List *list = IoList_rawList(values);
		int size = List_size(list);
		RtFloat* riValues = new RtFloat[size];
		for(int i = 0; i < size; ++i)
		{
			IoNumber* num = reinterpret_cast<IoNumber*>(List_at_(list, i));
			if(!ISNUMBER(num))
				throw(std::runtime_error("Parameter list item must be a number"));
			riValues[i] = IoNumber_asDouble(num);
		}
		return riValues;
	}
	// If it is a single numerical value.
	else if(ISNUMBER(values))
	{
		RtFloat* riValues = new RtFloat[1];
		riValues[0] = IoNumber_asDouble(values);
		return riValues;
	}
	else
	{
		throw(std::runtime_error("Float type parameter value must be a list(Number) or Number"));
	}
	return NULL;
}

RtFloat* IoRenderMan_getPointParameter(Aqsis::CqPrimvarToken& tok, IoObject* values)
{
	// If the values have been provided in a list.
	if(ISLIST(values))
	{
		List *list = IoList_rawList(values);
		int size = List_size(list);
		RtFloat* riValues = new RtFloat[size*3];
		for(int i = 0; i < size; ++i)
		{
			IoObject* value = reinterpret_cast<IoObject*>(List_at_(list, i));
			if(!ISVECTOR(value))
				throw(std::runtime_error("Parameter list item type RtPoint must be a Vector type"));
			UArray *vector = IoSeq_rawUArray(value);

			if(UArray_size(vector) < 3)
				throw(std::runtime_error("Vector argument to RiPoint parameter must contain at least 3 elements"));

			for(int j = 0; j < 3; j++)
				riValues[i*3+j] = (double)UArray_doubleAt_(vector, j);
		}
		return riValues;
	}
	// If it is a single RtPoint or Vector value.
	else if(ISVECTOR(values))
	{
		RtFloat* riValues = new RtFloat[3];
		size_t i;
		UArray *vector = IoSeq_rawUArray(values);

		if(UArray_size(vector) < 3)
			throw(std::runtime_error("Vector argument to RiPoint parameter must contain at least 3 elements"));

		for(i = 0; i < 3; i++)
				riValues[i] = (double)UArray_doubleAt_(vector, i);
		std::cout << "Done" << std::endl;
		return riValues;
	}
	else
	{
		throw(std::runtime_error("Float type parameter value must be a list(Number) or Number"));
	}
	return NULL;
}

RtPointer IoRenderMan_getParameterValue(IoObject *self, char* token, IoObject* values)
{
	Aqsis::CqPrimvarToken tok = DATA(self)->tokenDict.parseAndLookup(token);
	// Now process the token and prep the value data accordingly.
	switch(tok.type())
	{
		case Aqsis::type_float:
		{
			return IoRenderMan_getFloatParameter(tok, values);
			break;
		}
		case Aqsis::type_integer:
		case Aqsis::type_bool:
		case Aqsis::type_string:
			break;
		case Aqsis::type_triple:
		case Aqsis::type_point:
		case Aqsis::type_normal:
		case Aqsis::type_vector:
		case Aqsis::type_color:
		{
			return IoRenderMan_getPointParameter(tok, values);
			break;
		}
		case Aqsis::type_hpoint:
		case Aqsis::type_matrix:
		case Aqsis::type_sixteentuple:
		case Aqsis::type_void:
		case Aqsis::type_invalid:
			break;
	}
	throw(std::runtime_error("Unrecognised parameter type."));
	return NULL;
}


void IoRenderMan_getParameterList(IoObject* self, IoObject* locals, IoMessage* m, int startArg, int numExtraArgs, IoRenderManParameterList& plist)
{
	plist.count = 0;
	plist.tokens = NULL;
	plist.values = NULL;

	try
	{
		// Check the paramlist has been passed as a set of extra arguments to the function, name/value
		// pairs.
		if(numExtraArgs > 1 && (numExtraArgs&1) == 0)
		{
			int arg = startArg;
			int numTokens = numExtraArgs/2;
			plist.tokens = new RtToken[numTokens];
			plist.values = new RtPointer[numTokens];
			plist.count = numTokens;
			// Process each token
			for(int tokenIndex = 0; tokenIndex < numTokens; ++tokenIndex, arg+=2)
			{
				// First of each pair is the name.
				char* token = IoMessage_locals_cStringArgAt_(m, locals, arg);
				plist.tokens[tokenIndex] = token;
				// Next is the value.
				IoObject *values = IoMessage_locals_valueArgAt_(m, locals, arg+1);
				plist.values[tokenIndex] = IoRenderMan_getParameterValue(self, token, values);
			}
		}
		// Otherwise, we presume it's a map or list(list).
		else if(numExtraArgs == 1)
		{
			IoObject *parameters = IoMessage_locals_valueArgAt_(m, locals, startArg);
			if(ISMAP(parameters))
			{
				List* envKeys = IoList_rawList(IoMap_rawKeys(parameters));
				int numTokens = envKeys->size;
				plist.tokens = new RtToken[numTokens];
				plist.values = new RtPointer[numTokens];
				plist.count = numTokens;
				LIST_FOREACH(envKeys, i, k, 
					IOASSERT(ISSEQ(reinterpret_cast<IoObject*>(k)), "parameter names must be sequences");
					IoObject* values = IoMap_rawAt(parameters, reinterpret_cast<IoSeq*>(k));
					// TODO: check if it's safe to use the return from IoSeq_asCString
					plist.tokens[i] = IoSeq_asCString(reinterpret_cast<IoSeq*>(k));
					plist.values[i] = IoRenderMan_getParameterValue(self, plist.tokens[i], values);
				)		
			}
		}
	}
	catch(Aqsis::XqValidation& err)
	{
		IoState_error_(IOSTATE, m, "%s %s", err.description(), err.what());
	}
	catch(std::runtime_error& err)
	{
		IoState_error_(IOSTATE, m, "%s %s", err.what());
	}
}

void IoRenderMan_freeParameterList(IoRenderManParameterList* plist)
{
	// TODO: need to clear the values arrays and tokens when it's all working.
	delete(plist);
}

