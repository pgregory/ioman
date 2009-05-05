
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
	RtInt yresolution;
	RtFloat pixelaspectratio;
	xresolution = IoMessage_locals_intArgAt_(m, locals, 0);
	yresolution = IoMessage_locals_intArgAt_(m, locals, 1);
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
	RtFloat right;
	RtFloat bottom;
	RtFloat top;
	left = IoMessage_locals_doubleArgAt_(m, locals, 0);
	right = IoMessage_locals_doubleArgAt_(m, locals, 1);
	bottom = IoMessage_locals_doubleArgAt_(m, locals, 2);
	top = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiScreenWindow(left, right, bottom, top);
	return self;
}
	
IoObject *IoRenderMan_RiCropWindow(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat xmin;
	RtFloat xmax;
	RtFloat ymin;
	RtFloat ymax;
	xmin = IoMessage_locals_doubleArgAt_(m, locals, 0);
	xmax = IoMessage_locals_doubleArgAt_(m, locals, 1);
	ymin = IoMessage_locals_doubleArgAt_(m, locals, 2);
	ymax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiCropWindow(xmin, xmax, ymin, ymax);
	return self;
}
	
IoObject *IoRenderMan_RiProjection(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiProjectionV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiClipping(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat cnear;
	RtFloat cfar;
	cnear = IoMessage_locals_doubleArgAt_(m, locals, 0);
	cfar = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiClipping(cnear, cfar);
	return self;
}
	
IoObject *IoRenderMan_RiClippingPlane(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	RtFloat y;
	RtFloat z;
	RtFloat nx;
	RtFloat ny;
	RtFloat nz;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	z = IoMessage_locals_doubleArgAt_(m, locals, 2);
	nx = IoMessage_locals_doubleArgAt_(m, locals, 3);
	ny = IoMessage_locals_doubleArgAt_(m, locals, 4);
	nz = IoMessage_locals_doubleArgAt_(m, locals, 5);
	RiClippingPlane(x, y, z, nx, ny, nz);
	return self;
}
	
IoObject *IoRenderMan_RiShutter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat opentime;
	RtFloat closetime;
	opentime = IoMessage_locals_doubleArgAt_(m, locals, 0);
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
	RtFloat ysamples;
	xsamples = IoMessage_locals_doubleArgAt_(m, locals, 0);
	ysamples = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiPixelSamples(xsamples, ysamples);
	return self;
}
	
IoObject *IoRenderMan_RiPixelFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFilterFunc function;
	RtFloat xwidth;
	RtFloat ywidth;
	// Unhandled type.
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 1);
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiPixelFilter(function, xwidth, ywidth);
	return self;
}
	
IoObject *IoRenderMan_RiExposure(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat gain;
	RtFloat gamma;
	gain = IoMessage_locals_doubleArgAt_(m, locals, 0);
	gamma = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiExposure(gain, gamma);
	return self;
}
	
IoObject *IoRenderMan_RiImager(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiImagerV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiQuantize(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	RtInt one;
	RtInt min;
	RtInt max;
	RtFloat ditheramplitude;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	one = IoMessage_locals_intArgAt_(m, locals, 1);
	min = IoMessage_locals_intArgAt_(m, locals, 2);
	max = IoMessage_locals_intArgAt_(m, locals, 3);
	ditheramplitude = IoMessage_locals_doubleArgAt_(m, locals, 4);
	RiQuantize(type, one, min, max, ditheramplitude);
	return self;
}
	
IoObject *IoRenderMan_RiDisplay(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	RtToken type;
	RtToken mode;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	type = IoMessage_locals_cStringArgAt_(m, locals, 1);
	mode = IoMessage_locals_cStringArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiDisplayV(name, type, mode, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiHider(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
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
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
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
	RtFloat t1;
	RtFloat s2;
	RtFloat t2;
	RtFloat s3;
	RtFloat t3;
	RtFloat s4;
	RtFloat t4;
	s1 = IoMessage_locals_doubleArgAt_(m, locals, 0);
	t1 = IoMessage_locals_doubleArgAt_(m, locals, 1);
	s2 = IoMessage_locals_doubleArgAt_(m, locals, 2);
	t2 = IoMessage_locals_doubleArgAt_(m, locals, 3);
	s3 = IoMessage_locals_doubleArgAt_(m, locals, 4);
	t3 = IoMessage_locals_doubleArgAt_(m, locals, 5);
	s4 = IoMessage_locals_doubleArgAt_(m, locals, 6);
	t4 = IoMessage_locals_doubleArgAt_(m, locals, 7);
	RiTextureCoordinates(s1, t1, s2, t2, s3, t3, s4, t4);
	return self;
}
	
IoObject *IoRenderMan_RiSurface(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiSurfaceV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiDisplacement(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiDisplacementV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiAtmosphere(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiAtmosphereV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiInterior(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiInteriorV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiExterior(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiExteriorV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiShaderLayer(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	RtToken name;
	RtToken layername;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	name = IoMessage_locals_cStringArgAt_(m, locals, 1);
	layername = IoMessage_locals_cStringArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiShaderLayerV(type, name, layername, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiConnectShaderLayers(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	RtToken layer1;
	RtToken variable1;
	RtToken layer2;
	RtToken variable2;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	layer1 = IoMessage_locals_cStringArgAt_(m, locals, 1);
	variable1 = IoMessage_locals_cStringArgAt_(m, locals, 2);
	layer2 = IoMessage_locals_cStringArgAt_(m, locals, 3);
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
	RtFloat onlow;
	RtFloat onhigh;
	RtFloat offhigh;
	offlow = IoMessage_locals_doubleArgAt_(m, locals, 0);
	onlow = IoMessage_locals_doubleArgAt_(m, locals, 1);
	onhigh = IoMessage_locals_doubleArgAt_(m, locals, 2);
	offhigh = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiDetailRange(offlow, onlow, onhigh, offhigh);
	return self;
}
	
IoObject *IoRenderMan_RiGeometricApproximation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	RtFloat value;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
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
	RtFloat dy;
	RtFloat dz;
	dx = IoMessage_locals_doubleArgAt_(m, locals, 0);
	dy = IoMessage_locals_doubleArgAt_(m, locals, 1);
	dz = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiTranslate(dx, dy, dz);
	return self;
}
	
IoObject *IoRenderMan_RiRotate(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat angle;
	RtFloat dx;
	RtFloat dy;
	RtFloat dz;
	angle = IoMessage_locals_doubleArgAt_(m, locals, 0);
	dx = IoMessage_locals_doubleArgAt_(m, locals, 1);
	dy = IoMessage_locals_doubleArgAt_(m, locals, 2);
	dz = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiRotate(angle, dx, dy, dz);
	return self;
}
	
IoObject *IoRenderMan_RiScale(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat sx;
	RtFloat sy;
	RtFloat sz;
	sx = IoMessage_locals_doubleArgAt_(m, locals, 0);
	sy = IoMessage_locals_doubleArgAt_(m, locals, 1);
	sz = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiScale(sx, sy, sz);
	return self;
}
	
IoObject *IoRenderMan_RiSkew(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat angle;
	RtFloat dx1;
	RtFloat dy1;
	RtFloat dz1;
	RtFloat dx2;
	RtFloat dy2;
	RtFloat dz2;
	angle = IoMessage_locals_doubleArgAt_(m, locals, 0);
	dx1 = IoMessage_locals_doubleArgAt_(m, locals, 1);
	dy1 = IoMessage_locals_doubleArgAt_(m, locals, 2);
	dz1 = IoMessage_locals_doubleArgAt_(m, locals, 3);
	dx2 = IoMessage_locals_doubleArgAt_(m, locals, 4);
	dy2 = IoMessage_locals_doubleArgAt_(m, locals, 5);
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
	RtToken type;
	handle = IoMessage_locals_cStringArgAt_(m, locals, 0);
	type = IoMessage_locals_cStringArgAt_(m, locals, 1);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
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
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiAttributeV(name, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPolygon(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nvertices;
	nvertices = IoMessage_locals_intArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiPolygonV(nvertices, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiGeneralPolygon(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nloops;
	RtInt* nverts;
	nloops = IoMessage_locals_intArgAt_(m, locals, 0);
		int __nverts_length = nloops;
	nverts = new RtInt[__nverts_length];
	int __nverts_index;
	List* __nverts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	IOASSERT(List_size(__nverts_list) == __nverts_length, "Invalid list length");
	for(__nverts_index = 0; __nverts_index<__nverts_length; __nverts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nverts_list, __nverts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nverts[__nverts_index] = IoNumber_asInt(entry);
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiGeneralPolygonV(nloops, nverts, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPointsPolygons(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt npolys;
	RtInt* nverts;
	RtInt* verts;
	npolys = IoMessage_locals_intArgAt_(m, locals, 0);
		int __nverts_length = npolys;
	nverts = new RtInt[__nverts_length];
	int __nverts_index;
	List* __nverts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	IOASSERT(List_size(__nverts_list) == __nverts_length, "Invalid list length");
	for(__nverts_index = 0; __nverts_index<__nverts_length; __nverts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nverts_list, __nverts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nverts[__nverts_index] = IoNumber_asInt(entry);
	}
		int __verts_length = 0;
		{
			int __i;
			for(__i=0; __i<npolys; __i++)
				__verts_length+=nverts[__i];
		}
	verts = new RtInt[__verts_length];
	int __verts_index;
	List* __verts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	IOASSERT(List_size(__verts_list) == __verts_length, "Invalid list length");
	for(__verts_index = 0; __verts_index<__verts_length; __verts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__verts_list, __verts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		verts[__verts_index] = IoNumber_asInt(entry);
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiPointsPolygonsV(npolys, nverts, verts, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPointsGeneralPolygons(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt npolys;
	RtInt* nloops;
	RtInt* nverts;
	RtInt* verts;
	npolys = IoMessage_locals_intArgAt_(m, locals, 0);
		int __nloops_length = npolys;
	nloops = new RtInt[__nloops_length];
	int __nloops_index;
	List* __nloops_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	IOASSERT(List_size(__nloops_list) == __nloops_length, "Invalid list length");
	for(__nloops_index = 0; __nloops_index<__nloops_length; __nloops_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nloops_list, __nloops_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nloops[__nloops_index] = IoNumber_asInt(entry);
	}
		int __nverts_length = 0;
		{
			int __i;
			for(__i=0; __i<npolys; __i++)
				__nverts_length+=nloops[__i];
		}
	nverts = new RtInt[__nverts_length];
	int __nverts_index;
	List* __nverts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	IOASSERT(List_size(__nverts_list) == __nverts_length, "Invalid list length");
	for(__nverts_index = 0; __nverts_index<__nverts_length; __nverts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nverts_list, __nverts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nverts[__nverts_index] = IoNumber_asInt(entry);
	}
		int __verts_length = 0;
		{
			int __i;
			for(__i=0; __i<__nverts_length; __i++)
				__verts_length+=nverts[__i];
		}
	verts = new RtInt[__verts_length];
	int __verts_index;
	List* __verts_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 3));
	IOASSERT(List_size(__verts_list) == __verts_length, "Invalid list length");
	for(__verts_index = 0; __verts_index<__verts_length; __verts_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__verts_list, __verts_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		verts[__verts_index] = IoNumber_asInt(entry);
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiPointsGeneralPolygonsV(npolys, nloops, nverts, verts, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPatch(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiPatchV(type, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPatchMesh(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	RtInt nu;
	RtToken uwrap;
	RtInt nv;
	RtToken vwrap;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	nu = IoMessage_locals_intArgAt_(m, locals, 1);
	uwrap = IoMessage_locals_cStringArgAt_(m, locals, 2);
	nv = IoMessage_locals_intArgAt_(m, locals, 3);
	vwrap = IoMessage_locals_cStringArgAt_(m, locals, 4);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiPatchMeshV(type, nu, uwrap, nv, vwrap, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiNuPatch(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nu;
	RtInt uorder;
	RtFloat* uknot;
	RtFloat umin;
	RtFloat umax;
	RtInt nv;
	RtInt vorder;
	RtFloat* vknot;
	RtFloat vmin;
	RtFloat vmax;
	nu = IoMessage_locals_intArgAt_(m, locals, 0);
	uorder = IoMessage_locals_intArgAt_(m, locals, 1);
		int __uknot_length = nu + uorder;
	uknot = new RtFloat[__uknot_length];
	int __uknot_index;
	List* __uknot_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	IOASSERT(List_size(__uknot_list) == __uknot_length, "Invalid list length");
	for(__uknot_index = 0; __uknot_index<__uknot_length; __uknot_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__uknot_list, __uknot_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		uknot[__uknot_index] = IoNumber_asFloat(entry);
	}
	umin = IoMessage_locals_doubleArgAt_(m, locals, 3);
	umax = IoMessage_locals_doubleArgAt_(m, locals, 4);
	nv = IoMessage_locals_intArgAt_(m, locals, 5);
	vorder = IoMessage_locals_intArgAt_(m, locals, 6);
		int __vknot_length = nv + vorder;
	vknot = new RtFloat[__vknot_length];
	int __vknot_index;
	List* __vknot_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 7));
	IOASSERT(List_size(__vknot_list) == __vknot_length, "Invalid list length");
	for(__vknot_index = 0; __vknot_index<__vknot_length; __vknot_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__vknot_list, __vknot_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		vknot[__vknot_index] = IoNumber_asFloat(entry);
	}
	vmin = IoMessage_locals_doubleArgAt_(m, locals, 8);
	vmax = IoMessage_locals_doubleArgAt_(m, locals, 9);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiNuPatchV(nu, uorder, uknot, umin, umax, nv, vorder, vknot, vmin, vmax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiTrimCurve(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nloops;
	RtInt* ncurves;
	RtInt* order;
	RtFloat* knot;
	RtFloat* min;
	RtFloat* max;
	RtInt* n;
	RtFloat* u;
	RtFloat* v;
	RtFloat* w;
	nloops = IoMessage_locals_intArgAt_(m, locals, 0);
		int __ncurves_length = nloops;
	ncurves = new RtInt[__ncurves_length];
	int __ncurves_index;
	List* __ncurves_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	IOASSERT(List_size(__ncurves_list) == __ncurves_length, "Invalid list length");
	for(__ncurves_index = 0; __ncurves_index<__ncurves_length; __ncurves_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__ncurves_list, __ncurves_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		ncurves[__ncurves_index] = IoNumber_asInt(entry);
	}
		int __order_length = 0;
		{
			int __i;
			for(__i=0; __i<nloops; __i++)
				__order_length+=ncurves[__i];
		}
	order = new RtInt[__order_length];
	int __order_index;
	List* __order_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	IOASSERT(List_size(__order_list) == __order_length, "Invalid list length");
	for(__order_index = 0; __order_index<__order_length; __order_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__order_list, __order_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		order[__order_index] = IoNumber_asInt(entry);
	}
		int __knot_length = 0;
		{
			int __i;
			for(__i=0; __i<__order_length; __i++)
				__knot_length+=order[__i]+n[__i];
		}
	knot = new RtFloat[__knot_length];
	int __knot_index;
	List* __knot_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 3));
	IOASSERT(List_size(__knot_list) == __knot_length, "Invalid list length");
	for(__knot_index = 0; __knot_index<__knot_length; __knot_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__knot_list, __knot_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		knot[__knot_index] = IoNumber_asFloat(entry);
	}
		int __min_length = __order_length;
	min = new RtFloat[__min_length];
	int __min_index;
	List* __min_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 4));
	IOASSERT(List_size(__min_list) == __min_length, "Invalid list length");
	for(__min_index = 0; __min_index<__min_length; __min_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__min_list, __min_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		min[__min_index] = IoNumber_asFloat(entry);
	}
		int __max_length = __order_length;
	max = new RtFloat[__max_length];
	int __max_index;
	List* __max_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 5));
	IOASSERT(List_size(__max_list) == __max_length, "Invalid list length");
	for(__max_index = 0; __max_index<__max_length; __max_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__max_list, __max_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		max[__max_index] = IoNumber_asFloat(entry);
	}
		int __n_length = __order_length;
	n = new RtInt[__n_length];
	int __n_index;
	List* __n_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 6));
	IOASSERT(List_size(__n_list) == __n_length, "Invalid list length");
	for(__n_index = 0; __n_index<__n_length; __n_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__n_list, __n_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		n[__n_index] = IoNumber_asInt(entry);
	}
		int __u_length = 0;
		{
			int __i;
			for(__i=0; __i<__order_length; __i++)
				__u_length+=n[__i];
		}
	u = new RtFloat[__u_length];
	int __u_index;
	List* __u_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 7));
	IOASSERT(List_size(__u_list) == __u_length, "Invalid list length");
	for(__u_index = 0; __u_index<__u_length; __u_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__u_list, __u_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		u[__u_index] = IoNumber_asFloat(entry);
	}
		int __v_length = __u_length;
	v = new RtFloat[__v_length];
	int __v_index;
	List* __v_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 8));
	IOASSERT(List_size(__v_list) == __v_length, "Invalid list length");
	for(__v_index = 0; __v_index<__v_length; __v_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__v_list, __v_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		v[__v_index] = IoNumber_asFloat(entry);
	}
		int __w_length = __u_length;
	w = new RtFloat[__w_length];
	int __w_index;
	List* __w_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 9));
	IOASSERT(List_size(__w_list) == __w_length, "Invalid list length");
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
	RtFloat zmin;
	RtFloat zmax;
	RtFloat thetamax;
	radius = IoMessage_locals_doubleArgAt_(m, locals, 0);
	zmin = IoMessage_locals_doubleArgAt_(m, locals, 1);
	zmax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiSphereV(radius, zmin, zmax, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiCone(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat height;
	RtFloat radius;
	RtFloat thetamax;
	height = IoMessage_locals_doubleArgAt_(m, locals, 0);
	radius = IoMessage_locals_doubleArgAt_(m, locals, 1);
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiConeV(height, radius, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiCylinder(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat radius;
	RtFloat zmin;
	RtFloat zmax;
	RtFloat thetamax;
	radius = IoMessage_locals_doubleArgAt_(m, locals, 0);
	zmin = IoMessage_locals_doubleArgAt_(m, locals, 1);
	zmax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiCylinderV(radius, zmin, zmax, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiParaboloid(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat rmax;
	RtFloat zmin;
	RtFloat zmax;
	RtFloat thetamax;
	rmax = IoMessage_locals_doubleArgAt_(m, locals, 0);
	zmin = IoMessage_locals_doubleArgAt_(m, locals, 1);
	zmax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiParaboloidV(rmax, zmin, zmax, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiDisk(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat height;
	RtFloat radius;
	RtFloat thetamax;
	height = IoMessage_locals_doubleArgAt_(m, locals, 0);
	radius = IoMessage_locals_doubleArgAt_(m, locals, 1);
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiDiskV(height, radius, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiTorus(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat majorrad;
	RtFloat minorrad;
	RtFloat phimin;
	RtFloat phimax;
	RtFloat thetamax;
	majorrad = IoMessage_locals_doubleArgAt_(m, locals, 0);
	minorrad = IoMessage_locals_doubleArgAt_(m, locals, 1);
	phimin = IoMessage_locals_doubleArgAt_(m, locals, 2);
	phimax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 4);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiTorusV(majorrad, minorrad, phimin, phimax, thetamax, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiPoints(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt npoints;
	npoints = IoMessage_locals_intArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiPointsV(npoints, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiCurves(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	RtInt ncurves;
	RtInt* nvertices;
	RtToken wrap;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	ncurves = IoMessage_locals_intArgAt_(m, locals, 1);
		int __nvertices_length = ncurves;
	nvertices = new RtInt[__nvertices_length];
	int __nvertices_index;
	List* __nvertices_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	IOASSERT(List_size(__nvertices_list) == __nvertices_length, "Invalid list length");
	for(__nvertices_index = 0; __nvertices_index<__nvertices_length; __nvertices_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nvertices_list, __nvertices_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nvertices[__nvertices_index] = IoNumber_asInt(entry);
	}
	wrap = IoMessage_locals_cStringArgAt_(m, locals, 3);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiCurvesV(type, ncurves, nvertices, wrap, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiBlobby(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nleaf;
	RtInt ncode;
	RtInt* code;
	RtInt nflt;
	RtFloat* flt;
	RtInt nstr;
	RtToken* str;
	nleaf = IoMessage_locals_intArgAt_(m, locals, 0);
	ncode = IoMessage_locals_intArgAt_(m, locals, 1);
		int __code_length = ncode;
	code = new RtInt[__code_length];
	int __code_index;
	List* __code_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	IOASSERT(List_size(__code_list) == __code_length, "Invalid list length");
	for(__code_index = 0; __code_index<__code_length; __code_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__code_list, __code_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		code[__code_index] = IoNumber_asInt(entry);
	}
	nflt = IoMessage_locals_intArgAt_(m, locals, 3);
		int __flt_length = nflt;
	flt = new RtFloat[__flt_length];
	int __flt_index;
	List* __flt_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 4));
	IOASSERT(List_size(__flt_list) == __flt_length, "Invalid list length");
	for(__flt_index = 0; __flt_index<__flt_length; __flt_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__flt_list, __flt_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		flt[__flt_index] = IoNumber_asFloat(entry);
	}
	nstr = IoMessage_locals_intArgAt_(m, locals, 5);
		int __str_length = nstr;
	str = new RtToken[__str_length];
	int __str_index;
	List* __str_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 6));
	IOASSERT(List_size(__str_list) == __str_length, "Invalid list length");
	for(__str_index = 0; __str_index<__str_length; __str_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__str_list, __str_index));
	// RtTokenArray not yet supported.
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiBlobbyV(nleaf, ncode, code, nflt, flt, nstr, str, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiGeometry(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
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
	RtString texturefile;
	RtToken swrap;
	RtToken twrap;
	RtFilterFunc filterfunc;
	RtFloat swidth;
	RtFloat twidth;
	imagefile = IoMessage_locals_cStringArgAt_(m, locals, 0);
	texturefile = IoMessage_locals_cStringArgAt_(m, locals, 1);
	swrap = IoMessage_locals_cStringArgAt_(m, locals, 2);
	twrap = IoMessage_locals_cStringArgAt_(m, locals, 3);
	// Unhandled type.
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 5);
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 6);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiMakeTextureV(imagefile, texturefile, swrap, twrap, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiMakeLatLongEnvironment(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString imagefile;
	RtString reflfile;
	RtFilterFunc filterfunc;
	RtFloat swidth;
	RtFloat twidth;
	imagefile = IoMessage_locals_cStringArgAt_(m, locals, 0);
	reflfile = IoMessage_locals_cStringArgAt_(m, locals, 1);
	// Unhandled type.
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 4);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiMakeLatLongEnvironmentV(imagefile, reflfile, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiMakeCubeFaceEnvironment(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString px;
	RtString nx;
	RtString py;
	RtString ny;
	RtString pz;
	RtString nz;
	RtString reflfile;
	RtFloat fov;
	RtFilterFunc filterfunc;
	RtFloat swidth;
	RtFloat twidth;
	px = IoMessage_locals_cStringArgAt_(m, locals, 0);
	nx = IoMessage_locals_cStringArgAt_(m, locals, 1);
	py = IoMessage_locals_cStringArgAt_(m, locals, 2);
	ny = IoMessage_locals_cStringArgAt_(m, locals, 3);
	pz = IoMessage_locals_cStringArgAt_(m, locals, 4);
	nz = IoMessage_locals_cStringArgAt_(m, locals, 5);
	reflfile = IoMessage_locals_cStringArgAt_(m, locals, 6);
	fov = IoMessage_locals_doubleArgAt_(m, locals, 7);
	// Unhandled type.
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 9);
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 10);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiMakeCubeFaceEnvironmentV(px, nx, py, ny, pz, nz, reflfile, fov, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiMakeShadow(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString picfile;
	RtString shadowfile;
	picfile = IoMessage_locals_cStringArgAt_(m, locals, 0);
	shadowfile = IoMessage_locals_cStringArgAt_(m, locals, 1);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiMakeShadowV(picfile, shadowfile, plist.count, plist.tokens, plist.values);
	return self;
}
	
IoObject *IoRenderMan_RiMakeOcclusion(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt npics;
	RtString* picfiles;
	RtString shadowfile;
	npics = IoMessage_locals_intArgAt_(m, locals, 0);
		int __picfiles_length = npics;
	picfiles = new RtString[__picfiles_length];
	int __picfiles_index;
	List* __picfiles_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	IOASSERT(List_size(__picfiles_list) == __picfiles_length, "Invalid list length");
	for(__picfiles_index = 0; __picfiles_index<__picfiles_length; __picfiles_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__picfiles_list, __picfiles_index));
	// RtStringArray not yet supported.
	}
	shadowfile = IoMessage_locals_cStringArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
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
	RtArchiveCallback callback;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	// Unhandled type.
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 0, IoMessage_argCount(m) - 0, plist);
	RiReadArchiveV(name, callback, plist.count, plist.tokens, plist.values);
	return self;
}
	

