
// Automatically generated from the api.xml via io_sigs.xsl, do not hand edit!
		
IoObject *IoRenderMan_RiFrameBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt number;
	number = IoMessage_locals_intArgAt_(m, locals, 0);
	RiFrameBegin(number);
	return self;
}
	
IoObject *IoRenderMan_RiFrameEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiFrameEnd();
	return self;
}
	
IoObject *IoRenderMan_RiWorldBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiWorldBegin();
	return self;
}
	
IoObject *IoRenderMan_RiWorldEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiWorldEnd();
	return self;
}
	
IoObject *IoRenderMan_RiIfBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString condition;
	condition = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiIfBegin(condition);
	return self;
}
	
IoObject *IoRenderMan_RiElseIf(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString condition;
	condition = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiElseIf(condition);
	return self;
}
	
IoObject *IoRenderMan_RiElse(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiElse();
	return self;
}
	
IoObject *IoRenderMan_RiIfEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiIfEnd();
	return self;
}
	
IoObject *IoRenderMan_RiFormat(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt xresolution;
	xresolution = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt yresolution;
	yresolution = IoMessage_locals_intArgAt_(m, locals, 1);
	RtFloat pixelaspectratio;
	pixelaspectratio = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiFormat(xresolution, yresolution, pixelaspectratio);
	return self;
}
	
IoObject *IoRenderMan_RiFrameAspectRatio(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat frameratio;
	frameratio = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiFrameAspectRatio(frameratio);
	return self;
}
	
IoObject *IoRenderMan_RiScreenWindow(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat left;
	left = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat right;
	right = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat bottom;
	bottom = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat top;
	top = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiScreenWindow(left, right, bottom, top);
	return self;
}
	
IoObject *IoRenderMan_RiCropWindow(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat xmin;
	xmin = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat xmax;
	xmax = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat ymin;
	ymin = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ymax;
	ymax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiCropWindow(xmin, xmax, ymin, ymax);
	return self;
}
	
IoObject *IoRenderMan_RiProjection(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiProjectionV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiClipping(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat cnear;
	cnear = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat cfar;
	cfar = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiClipping(cnear, cfar);
	return self;
}
	
IoObject *IoRenderMan_RiClippingPlane(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat y;
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat z;
	z = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat nx;
	nx = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RtFloat ny;
	ny = IoMessage_locals_doubleArgAt_(m, locals, 4);
	RtFloat nz;
	nz = IoMessage_locals_doubleArgAt_(m, locals, 5);
	RiClippingPlane(x, y, z, nx, ny, nz);
	return self;
}
	
IoObject *IoRenderMan_RiShutter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat opentime;
	opentime = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat closetime;
	closetime = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiShutter(opentime, closetime);
	return self;
}
	
IoObject *IoRenderMan_RiPixelVariance(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat variance;
	variance = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiPixelVariance(variance);
	return self;
}
	
IoObject *IoRenderMan_RiPixelSamples(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat xsamples;
	xsamples = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat ysamples;
	ysamples = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiPixelSamples(xsamples, ysamples);
	return self;
}
	
IoObject *IoRenderMan_RiPixelFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFilterFunc function;
	// Unhandled type.
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiPixelFilter(function, xwidth, ywidth);
	return self;
}
	
IoObject *IoRenderMan_RiExposure(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat gain;
	gain = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat gamma;
	gamma = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiExposure(gain, gamma);
	return self;
}
	
IoObject *IoRenderMan_RiImager(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiImagerV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiQuantize(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtInt one;
	one = IoMessage_locals_intArgAt_(m, locals, 1);
	RtInt min;
	min = IoMessage_locals_intArgAt_(m, locals, 2);
	RtInt max;
	max = IoMessage_locals_intArgAt_(m, locals, 3);
	RtFloat ditheramplitude;
	ditheramplitude = IoMessage_locals_doubleArgAt_(m, locals, 4);
	RiQuantize(type, one, min, max, ditheramplitude);
	return self;
}
	
IoObject *IoRenderMan_RiDisplay(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtToken mode;
	mode = IoMessage_locals_cStringArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiDisplayV(name, type, mode, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiHider(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiHiderV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiRelativeDetail(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat relativedetail;
	relativedetail = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiRelativeDetail(relativedetail);
	return self;
}
	
IoObject *IoRenderMan_RiOption(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiOptionV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiAttributeBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiAttributeBegin();
	return self;
}
	
IoObject *IoRenderMan_RiAttributeEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiAttributeEnd();
	return self;
}
	
IoObject *IoRenderMan_RiColor(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtColor Cq;
	IoRenderMan_getPointArgument(m, locals, 0, Cq);
	RiColor(Cq);
	return self;
}
	
IoObject *IoRenderMan_RiOpacity(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtColor Os;
	IoRenderMan_getPointArgument(m, locals, 0, Os);
	RiOpacity(Os);
	return self;
}
	
IoObject *IoRenderMan_RiTextureCoordinates(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat s1;
	s1 = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat t1;
	t1 = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat s2;
	s2 = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat t2;
	t2 = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RtFloat s3;
	s3 = IoMessage_locals_doubleArgAt_(m, locals, 4);
	RtFloat t3;
	t3 = IoMessage_locals_doubleArgAt_(m, locals, 5);
	RtFloat s4;
	s4 = IoMessage_locals_doubleArgAt_(m, locals, 6);
	RtFloat t4;
	t4 = IoMessage_locals_doubleArgAt_(m, locals, 7);
	RiTextureCoordinates(s1, t1, s2, t2, s3, t3, s4, t4);
	return self;
}
	
IoObject *IoRenderMan_RiSurface(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiSurfaceV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiDisplacement(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiDisplacementV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiAtmosphere(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiAtmosphereV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiInterior(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiInteriorV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiExterior(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiExteriorV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiShaderLayer(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtToken layername;
	layername = IoMessage_locals_cStringArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiShaderLayerV(type, name, layername, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiConnectShaderLayers(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtToken layer1;
	layer1 = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtToken variable1;
	variable1 = IoMessage_locals_cStringArgAt_(m, locals, 2);
	RtToken layer2;
	layer2 = IoMessage_locals_cStringArgAt_(m, locals, 3);
	RtToken variable2;
	variable2 = IoMessage_locals_cStringArgAt_(m, locals, 4);
	RiConnectShaderLayers(type, layer1, variable1, layer2, variable2);
	return self;
}
	
IoObject *IoRenderMan_RiShadingRate(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat size;
	size = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiShadingRate(size);
	return self;
}
	
IoObject *IoRenderMan_RiShadingInterpolation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiShadingInterpolation(type);
	return self;
}
	
IoObject *IoRenderMan_RiMatte(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtBoolean onoff;
	onoff = IoMessage_locals_boolArgAt_(m, locals, 0);
	RiMatte(onoff);
	return self;
}
	
IoObject *IoRenderMan_RiBound(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtBound bound;
	IoRenderMan_getBoundArgument(m, locals, 0, bound);
	RiBound(bound);
	return self;
}
	
IoObject *IoRenderMan_RiDetail(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtBound bound;
	IoRenderMan_getBoundArgument(m, locals, 0, bound);
	RiDetail(bound);
	return self;
}
	
IoObject *IoRenderMan_RiDetailRange(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat offlow;
	offlow = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat onlow;
	onlow = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat onhigh;
	onhigh = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat offhigh;
	offhigh = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiDetailRange(offlow, onlow, onhigh, offhigh);
	return self;
}
	
IoObject *IoRenderMan_RiGeometricApproximation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtFloat value;
	value = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiGeometricApproximation(type, value);
	return self;
}
	
IoObject *IoRenderMan_RiOrientation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken orientation;
	orientation = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiOrientation(orientation);
	return self;
}
	
IoObject *IoRenderMan_RiReverseOrientation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiReverseOrientation();
	return self;
}
	
IoObject *IoRenderMan_RiSides(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nsides;
	nsides = IoMessage_locals_intArgAt_(m, locals, 0);
	RiSides(nsides);
	return self;
}
	
IoObject *IoRenderMan_RiIdentity(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiIdentity();
	return self;
}
	
IoObject *IoRenderMan_RiTransform(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtMatrix transform;
	IoRenderMan_getMatrixArgument(m, locals, 0, transform);
	RiTransform(transform);
	return self;
}
	
IoObject *IoRenderMan_RiConcatTransform(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtMatrix transform;
	IoRenderMan_getMatrixArgument(m, locals, 0, transform);
	RiConcatTransform(transform);
	return self;
}
	
IoObject *IoRenderMan_RiPerspective(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat fov;
	fov = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiPerspective(fov);
	return self;
}
	
IoObject *IoRenderMan_RiTranslate(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat dx;
	dx = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat dy;
	dy = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat dz;
	dz = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiTranslate(dx, dy, dz);
	return self;
}
	
IoObject *IoRenderMan_RiRotate(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat angle;
	angle = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat dx;
	dx = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat dy;
	dy = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat dz;
	dz = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiRotate(angle, dx, dy, dz);
	return self;
}
	
IoObject *IoRenderMan_RiScale(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat sx;
	sx = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat sy;
	sy = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat sz;
	sz = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiScale(sx, sy, sz);
	return self;
}
	
IoObject *IoRenderMan_RiSkew(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat angle;
	angle = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat dx1;
	dx1 = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat dy1;
	dy1 = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat dz1;
	dz1 = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RtFloat dx2;
	dx2 = IoMessage_locals_doubleArgAt_(m, locals, 4);
	RtFloat dy2;
	dy2 = IoMessage_locals_doubleArgAt_(m, locals, 5);
	RtFloat dz2;
	dz2 = IoMessage_locals_doubleArgAt_(m, locals, 6);
	RiSkew(angle, dx1, dy1, dz1, dx2, dy2, dz2);
	return self;
}
	
IoObject *IoRenderMan_RiCoordinateSystem(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken space;
	space = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiCoordinateSystem(space);
	return self;
}
	
IoObject *IoRenderMan_RiCoordSysTransform(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken space;
	space = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiCoordSysTransform(space);
	return self;
}
	
IoObject *IoRenderMan_RiTransformBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiTransformBegin();
	return self;
}
	
IoObject *IoRenderMan_RiTransformEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiTransformEnd();
	return self;
}
	
IoObject *IoRenderMan_RiResource(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken handle;
	handle = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 1);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 2, IoMessage_argCount(m) - 2, plist);
	RiResourceV(handle, type, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiResourceBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiResourceBegin();
	return self;
}
	
IoObject *IoRenderMan_RiResourceEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiResourceEnd();
	return self;
}
	
IoObject *IoRenderMan_RiAttribute(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiAttributeV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPolygon(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nvertices;
	nvertices = IoMessage_locals_intArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiPolygonV(nvertices, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiGeneralPolygon(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nloops;
	nloops = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt* nverts;
	int __nverts_index;
	List* __nverts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	int __nverts_length = List_size(__nverts_list);
	nverts = new RtInt[__nverts_length];
	for(__nverts_index = 0; __nverts_index<__nverts_length; __nverts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nverts_list, __nverts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nverts[__nverts_index] = IoNumber_asInt(entry);
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 2, IoMessage_argCount(m) - 2, plist);
	RiGeneralPolygonV(nloops, nverts, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPointsPolygons(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt npolys;
	npolys = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt* nverts;
	int __nverts_index;
	List* __nverts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	int __nverts_length = List_size(__nverts_list);
	nverts = new RtInt[__nverts_length];
	for(__nverts_index = 0; __nverts_index<__nverts_length; __nverts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nverts_list, __nverts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nverts[__nverts_index] = IoNumber_asInt(entry);
	}
	RtInt* verts;
	int __verts_index;
	List* __verts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	int __verts_length = List_size(__verts_list);
	verts = new RtInt[__verts_length];
	for(__verts_index = 0; __verts_index<__verts_length; __verts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__verts_list, __verts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		verts[__verts_index] = IoNumber_asInt(entry);
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiPointsPolygonsV(npolys, nverts, verts, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPointsGeneralPolygons(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt npolys;
	npolys = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt* nloops;
	int __nloops_index;
	List* __nloops_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	int __nloops_length = List_size(__nloops_list);
	nloops = new RtInt[__nloops_length];
	for(__nloops_index = 0; __nloops_index<__nloops_length; __nloops_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nloops_list, __nloops_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nloops[__nloops_index] = IoNumber_asInt(entry);
	}
	RtInt* nverts;
	int __nverts_index;
	List* __nverts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	int __nverts_length = List_size(__nverts_list);
	nverts = new RtInt[__nverts_length];
	for(__nverts_index = 0; __nverts_index<__nverts_length; __nverts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nverts_list, __nverts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nverts[__nverts_index] = IoNumber_asInt(entry);
	}
	RtInt* verts;
	int __verts_index;
	List* __verts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 3));
	int __verts_length = List_size(__verts_list);
	verts = new RtInt[__verts_length];
	for(__verts_index = 0; __verts_index<__verts_length; __verts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__verts_list, __verts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		verts[__verts_index] = IoNumber_asInt(entry);
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 4, IoMessage_argCount(m) - 4, plist);
	RiPointsGeneralPolygonsV(npolys, nloops, nverts, verts, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPatch(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiPatchV(type, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPatchMesh(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtInt nu;
	nu = IoMessage_locals_intArgAt_(m, locals, 1);
	RtToken uwrap;
	uwrap = IoMessage_locals_cStringArgAt_(m, locals, 2);
	RtInt nv;
	nv = IoMessage_locals_intArgAt_(m, locals, 3);
	RtToken vwrap;
	vwrap = IoMessage_locals_cStringArgAt_(m, locals, 4);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 5, IoMessage_argCount(m) - 5, plist);
	RiPatchMeshV(type, nu, uwrap, nv, vwrap, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiNuPatch(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nu;
	nu = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt uorder;
	uorder = IoMessage_locals_intArgAt_(m, locals, 1);
	RtFloat* uknot;
	int __uknot_index;
	List* __uknot_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	int __uknot_length = List_size(__uknot_list);
	uknot = new RtFloat[__uknot_length];
	for(__uknot_index = 0; __uknot_index<__uknot_length; __uknot_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__uknot_list, __uknot_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		uknot[__uknot_index] = IoNumber_asFloat(entry);
	}
	RtFloat umin;
	umin = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RtFloat umax;
	umax = IoMessage_locals_doubleArgAt_(m, locals, 4);
	RtInt nv;
	nv = IoMessage_locals_intArgAt_(m, locals, 5);
	RtInt vorder;
	vorder = IoMessage_locals_intArgAt_(m, locals, 6);
	RtFloat* vknot;
	int __vknot_index;
	List* __vknot_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 7));
	int __vknot_length = List_size(__vknot_list);
	vknot = new RtFloat[__vknot_length];
	for(__vknot_index = 0; __vknot_index<__vknot_length; __vknot_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__vknot_list, __vknot_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		vknot[__vknot_index] = IoNumber_asFloat(entry);
	}
	RtFloat vmin;
	vmin = IoMessage_locals_doubleArgAt_(m, locals, 8);
	RtFloat vmax;
	vmax = IoMessage_locals_doubleArgAt_(m, locals, 9);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 10, IoMessage_argCount(m) - 10, plist);
	RiNuPatchV(nu, uorder, uknot, umin, umax, nv, vorder, vknot, vmin, vmax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiTrimCurve(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nloops;
	nloops = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt* ncurves;
	int __ncurves_index;
	List* __ncurves_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	int __ncurves_length = List_size(__ncurves_list);
	ncurves = new RtInt[__ncurves_length];
	for(__ncurves_index = 0; __ncurves_index<__ncurves_length; __ncurves_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__ncurves_list, __ncurves_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		ncurves[__ncurves_index] = IoNumber_asInt(entry);
	}
	RtInt* order;
	int __order_index;
	List* __order_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	int __order_length = List_size(__order_list);
	order = new RtInt[__order_length];
	for(__order_index = 0; __order_index<__order_length; __order_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__order_list, __order_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		order[__order_index] = IoNumber_asInt(entry);
	}
	RtFloat* knot;
	int __knot_index;
	List* __knot_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 3));
	int __knot_length = List_size(__knot_list);
	knot = new RtFloat[__knot_length];
	for(__knot_index = 0; __knot_index<__knot_length; __knot_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__knot_list, __knot_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		knot[__knot_index] = IoNumber_asFloat(entry);
	}
	RtFloat* min;
	int __min_index;
	List* __min_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 4));
	int __min_length = List_size(__min_list);
	min = new RtFloat[__min_length];
	for(__min_index = 0; __min_index<__min_length; __min_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__min_list, __min_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		min[__min_index] = IoNumber_asFloat(entry);
	}
	RtFloat* max;
	int __max_index;
	List* __max_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 5));
	int __max_length = List_size(__max_list);
	max = new RtFloat[__max_length];
	for(__max_index = 0; __max_index<__max_length; __max_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__max_list, __max_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		max[__max_index] = IoNumber_asFloat(entry);
	}
	RtInt* n;
	int __n_index;
	List* __n_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 6));
	int __n_length = List_size(__n_list);
	n = new RtInt[__n_length];
	for(__n_index = 0; __n_index<__n_length; __n_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__n_list, __n_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		n[__n_index] = IoNumber_asInt(entry);
	}
	RtFloat* u;
	int __u_index;
	List* __u_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 7));
	int __u_length = List_size(__u_list);
	u = new RtFloat[__u_length];
	for(__u_index = 0; __u_index<__u_length; __u_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__u_list, __u_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		u[__u_index] = IoNumber_asFloat(entry);
	}
	RtFloat* v;
	int __v_index;
	List* __v_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 8));
	int __v_length = List_size(__v_list);
	v = new RtFloat[__v_length];
	for(__v_index = 0; __v_index<__v_length; __v_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__v_list, __v_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		v[__v_index] = IoNumber_asFloat(entry);
	}
	RtFloat* w;
	int __w_index;
	List* __w_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 9));
	int __w_length = List_size(__w_list);
	w = new RtFloat[__w_length];
	for(__w_index = 0; __w_index<__w_length; __w_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__w_list, __w_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		w[__w_index] = IoNumber_asFloat(entry);
	}
	RiTrimCurve(nloops, ncurves, order, knot, min, max, n, u, v, w);
	return self;
}
	
IoObject *IoRenderMan_RiSphere(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat radius;
	radius = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat zmin;
	zmin = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat zmax;
	zmax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat thetamax;
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 4, IoMessage_argCount(m) - 4, plist);
	RiSphereV(radius, zmin, zmax, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiCone(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat height;
	height = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat radius;
	radius = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat thetamax;
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiConeV(height, radius, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiCylinder(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat radius;
	radius = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat zmin;
	zmin = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat zmax;
	zmax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat thetamax;
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 4, IoMessage_argCount(m) - 4, plist);
	RiCylinderV(radius, zmin, zmax, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiParaboloid(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat rmax;
	rmax = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat zmin;
	zmin = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat zmax;
	zmax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat thetamax;
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 4, IoMessage_argCount(m) - 4, plist);
	RiParaboloidV(rmax, zmin, zmax, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiDisk(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat height;
	height = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat radius;
	radius = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat thetamax;
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiDiskV(height, radius, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiTorus(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat majorrad;
	majorrad = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat minorrad;
	minorrad = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat phimin;
	phimin = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat phimax;
	phimax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RtFloat thetamax;
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 4);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 5, IoMessage_argCount(m) - 5, plist);
	RiTorusV(majorrad, minorrad, phimin, phimax, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPoints(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt npoints;
	npoints = IoMessage_locals_intArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiPointsV(npoints, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiCurves(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtInt ncurves;
	ncurves = IoMessage_locals_intArgAt_(m, locals, 1);
	RtInt* nvertices;
	int __nvertices_index;
	List* __nvertices_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	int __nvertices_length = List_size(__nvertices_list);
	nvertices = new RtInt[__nvertices_length];
	for(__nvertices_index = 0; __nvertices_index<__nvertices_length; __nvertices_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nvertices_list, __nvertices_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nvertices[__nvertices_index] = IoNumber_asInt(entry);
	}
	RtToken wrap;
	wrap = IoMessage_locals_cStringArgAt_(m, locals, 3);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 4, IoMessage_argCount(m) - 4, plist);
	RiCurvesV(type, ncurves, nvertices, wrap, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiBlobby(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nleaf;
	nleaf = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt ncode;
	ncode = IoMessage_locals_intArgAt_(m, locals, 1);
	RtInt* code;
	int __code_index;
	List* __code_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	int __code_length = List_size(__code_list);
	code = new RtInt[__code_length];
	for(__code_index = 0; __code_index<__code_length; __code_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__code_list, __code_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		code[__code_index] = IoNumber_asInt(entry);
	}
	RtInt nflt;
	nflt = IoMessage_locals_intArgAt_(m, locals, 3);
	RtFloat* flt;
	int __flt_index;
	List* __flt_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 4));
	int __flt_length = List_size(__flt_list);
	flt = new RtFloat[__flt_length];
	for(__flt_index = 0; __flt_index<__flt_length; __flt_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__flt_list, __flt_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		flt[__flt_index] = IoNumber_asFloat(entry);
	}
	RtInt nstr;
	nstr = IoMessage_locals_intArgAt_(m, locals, 5);
	RtToken* str;
	int __str_index;
	List* __str_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 6));
	int __str_length = List_size(__str_list);
	str = new RtToken[__str_length];
	for(__str_index = 0; __str_index<__str_length; __str_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__str_list, __str_index));
	// RtTokenArray not yet supported.
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 7, IoMessage_argCount(m) - 7, plist);
	RiBlobbyV(nleaf, ncode, code, nflt, flt, nstr, str, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiGeometry(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiGeometryV(type, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiSolidBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiSolidBegin(type);
	return self;
}
	
IoObject *IoRenderMan_RiSolidEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiSolidEnd();
	return self;
}
	
IoObject *IoRenderMan_RiObjectEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiObjectEnd();
	return self;
}
	
IoObject *IoRenderMan_RiMotionEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiMotionEnd();
	return self;
}
	
IoObject *IoRenderMan_RiMakeTexture(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString imagefile;
	imagefile = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtString texturefile;
	texturefile = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtToken swrap;
	swrap = IoMessage_locals_cStringArgAt_(m, locals, 2);
	RtToken twrap;
	twrap = IoMessage_locals_cStringArgAt_(m, locals, 3);
	RtFilterFunc filterfunc;
	// Unhandled type.
	RtFloat swidth;
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 5);
	RtFloat twidth;
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 6);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 7, IoMessage_argCount(m) - 7, plist);
	RiMakeTextureV(imagefile, texturefile, swrap, twrap, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiMakeLatLongEnvironment(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString imagefile;
	imagefile = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtString reflfile;
	reflfile = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtFilterFunc filterfunc;
	// Unhandled type.
	RtFloat swidth;
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RtFloat twidth;
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 4);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 5, IoMessage_argCount(m) - 5, plist);
	RiMakeLatLongEnvironmentV(imagefile, reflfile, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiMakeCubeFaceEnvironment(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString px;
	px = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtString nx;
	nx = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtString py;
	py = IoMessage_locals_cStringArgAt_(m, locals, 2);
	RtString ny;
	ny = IoMessage_locals_cStringArgAt_(m, locals, 3);
	RtString pz;
	pz = IoMessage_locals_cStringArgAt_(m, locals, 4);
	RtString nz;
	nz = IoMessage_locals_cStringArgAt_(m, locals, 5);
	RtString reflfile;
	reflfile = IoMessage_locals_cStringArgAt_(m, locals, 6);
	RtFloat fov;
	fov = IoMessage_locals_doubleArgAt_(m, locals, 7);
	RtFilterFunc filterfunc;
	// Unhandled type.
	RtFloat swidth;
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 9);
	RtFloat twidth;
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 10);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 11, IoMessage_argCount(m) - 11, plist);
	RiMakeCubeFaceEnvironmentV(px, nx, py, ny, pz, nz, reflfile, fov, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiMakeShadow(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString picfile;
	picfile = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtString shadowfile;
	shadowfile = IoMessage_locals_cStringArgAt_(m, locals, 1);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 2, IoMessage_argCount(m) - 2, plist);
	RiMakeShadowV(picfile, shadowfile, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiMakeOcclusion(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt npics;
	npics = IoMessage_locals_intArgAt_(m, locals, 0);
	RtString* picfiles;
	int __picfiles_index;
	List* __picfiles_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	int __picfiles_length = List_size(__picfiles_list);
	picfiles = new RtString[__picfiles_length];
	for(__picfiles_index = 0; __picfiles_index<__picfiles_length; __picfiles_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__picfiles_list, __picfiles_index));
	// RtStringArray not yet supported.
	}
	RtString shadowfile;
	shadowfile = IoMessage_locals_cStringArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiMakeOcclusionV(npics, picfiles, shadowfile, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiErrorHandler(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtErrorFunc handler;
	// Unhandled type.
	RiErrorHandler(handler);
	return self;
}
	
IoObject *IoRenderMan_RiReadArchive(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtArchiveCallback callback;
	// Unhandled type.
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 2, IoMessage_argCount(m) - 2, plist);
	RiReadArchiveV(name, callback, plist.count, plist.tokens, plist.values);
	return self;
}
	

