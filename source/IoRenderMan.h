#ifndef IORenderMan_DEFINED
#define IORenderMan_DEFINED 1

#include "IoObject.h"
#include "ri.h"

// define a macro that can check whether an IoObject is of our type by checking whether it holds a pointer to our clone function
#define ISRenderMan(self) IoObject_hasCloneFunc_(self, (IoTagCloneFunc *)IoRenderMan_rawClone)

// declare a C type for ourselves
typedef IoObject IoRenderMan;

// define the requisite functions
IoTag *IoRenderMan_newTag(void *state);
IoObject *IoRenderMan_proto(void *state);
IoObject *IoRenderMan_rawClone(IoRenderMan *self);
IoObject *IoRenderMan_mark(IoRenderMan *self);
void IoRenderMan_free(IoRenderMan *self);

// define our custom C functions
IoObject *IoRenderMan_riWorldBegin(IoRenderMan *self, IoObject *locals, IoMessage *m);
IoObject *IoRenderMan_riWorldEnd(IoRenderMan *self, IoObject *locals, IoMessage *m);
IoObject *IoRenderMan_riSphere(IoRenderMan *self, IoObject *locals, IoMessage *m);

typedef struct
{
	RtContextHandle riContext;
} IoRenderManData;

#endif
