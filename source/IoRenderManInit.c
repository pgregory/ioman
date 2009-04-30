#include "IoState.h"
#include "IoObject.h"

IoObject *IoRenderMan_proto(void *state);

void IoRenderManInit(IoObject *context)
{
	IoState *self = IoObject_state((IoObject *)context);

	IoObject_setSlot_to_(context, SIOSYMBOL("RenderMan"), IoRenderMan_proto(self));

}
