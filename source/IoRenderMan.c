//metadoc TrivalObject copyright Your Name Here
//metadoc TrivalObject license BSD revised
//metadoc TrivalObject category Example
/*metadoc TrivalObject description
Describe your addon here.
*/

#include "IoState.h"
#include "IoRenderMan.h"

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
	IoObject_setDataPointer_(self, calloc(1, sizeof(IoRenderManData)));
	RiBegin("test.rib");
	DATA(self)->riContext = RiGetContext();

	// then register this proto generator
	IoState_registerProtoWithFunc_(state, self, IoRenderMan_proto);

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
	IoObject_setDataPointer_(self, calloc(1, sizeof(IoRenderManData)));
	RiBegin("test.rib");
	DATA(self)->riContext = RiGetContext();
	// This is where any object-specific data would be copied
	return self;
}

// _new creates a new object from this prototype
IoObject *IoRenderMan_new(void *state)
{
	IoObject *proto = IoState_protoWithInitFunction_(state, IoRenderMan_proto);
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
	RiContext(DATA(self)->riContext);
	RiSphere(1.0f, -1.0f, 1.0f, 360.0f, RI_NULL);
	return self;
}
