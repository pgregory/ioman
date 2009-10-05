
// Automatically generated from the api.xml via io_sigs.xsl, do not hand edit!
		
IoObject *IoRenderMan_declare(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtString declaration;
	declaration = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiDeclare(name, declaration);
	return self;

}
	
IoObject *IoRenderMan_begin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiBegin(name);
	return self;

}
	
IoObject *IoRenderMan_end(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiEnd();
	return self;

}
	
IoObject *IoRenderMan_getContext(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiGetContext();
	return self;

}
	
IoObject *IoRenderMan_context(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtContextHandle handle;
	// Unhandled type "RtContextHandle".
	RiContext(DATA(self)->riContext);
	RiContext(handle);
	return self;

}
	
IoObject *IoRenderMan_frameBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt number;
	number = IoMessage_locals_intArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiFrameBegin(number);
	return self;

}
	
IoObject *IoRenderMan_frameEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiFrameEnd();
	return self;

}
	
IoObject *IoRenderMan_worldBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiWorldBegin();
	return self;

}
	
IoObject *IoRenderMan_worldEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiWorldEnd();
	return self;

}
	
IoObject *IoRenderMan_ifBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString condition;
	condition = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiIfBegin(condition);
	return self;

}
	
IoObject *IoRenderMan_elseIf(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString condition;
	condition = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiElseIf(condition);
	return self;

}
	
IoObject *IoRenderMan_else(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiElse();
	return self;

}
	
IoObject *IoRenderMan_ifEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiIfEnd();
	return self;

}
	
IoObject *IoRenderMan_format(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt xresolution;
	xresolution = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt yresolution;
	yresolution = IoMessage_locals_intArgAt_(m, locals, 1);
	RtFloat pixelaspectratio;
	pixelaspectratio = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiContext(DATA(self)->riContext);
	RiFormat(xresolution, yresolution, pixelaspectratio);
	return self;

}
	
IoObject *IoRenderMan_frameAspectRatio(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat frameratio;
	frameratio = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiFrameAspectRatio(frameratio);
	return self;

}
	
IoObject *IoRenderMan_screenWindow(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat left;
	left = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat right;
	right = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat bottom;
	bottom = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat top;
	top = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiScreenWindow(left, right, bottom, top);
	return self;

}
	
IoObject *IoRenderMan_cropWindow(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat xmin;
	xmin = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat xmax;
	xmax = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat ymin;
	ymin = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ymax;
	ymax = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiCropWindow(xmin, xmax, ymin, ymax);
	return self;

}
	
IoObject *IoRenderMan_projection(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiProjectionV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_clipping(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat cnear;
	cnear = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat cfar;
	cfar = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiClipping(cnear, cfar);
	return self;

}
	
IoObject *IoRenderMan_clippingPlane(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiClippingPlane(x, y, z, nx, ny, nz);
	return self;

}
	
IoObject *IoRenderMan_depthOfField(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat fstop;
	fstop = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat focallength;
	focallength = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat focaldistance;
	focaldistance = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiContext(DATA(self)->riContext);
	RiDepthOfField(fstop, focallength, focaldistance);
	return self;

}
	
IoObject *IoRenderMan_shutter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat opentime;
	opentime = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat closetime;
	closetime = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiShutter(opentime, closetime);
	return self;

}
	
IoObject *IoRenderMan_pixelVariance(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat variance;
	variance = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiPixelVariance(variance);
	return self;

}
	
IoObject *IoRenderMan_pixelSamples(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat xsamples;
	xsamples = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat ysamples;
	ysamples = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiPixelSamples(xsamples, ysamples);
	return self;

}
	
IoObject *IoRenderMan_pixelFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFilterFunc function;
	const char* __function_name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	function = IoRenderMan_getFilterFromName(__function_name);
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiContext(DATA(self)->riContext);
	RiPixelFilter(function, xwidth, ywidth);
	return self;

}
	
IoObject *IoRenderMan_exposure(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat gain;
	gain = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat gamma;
	gamma = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiExposure(gain, gamma);
	return self;

}
	
IoObject *IoRenderMan_imager(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiImagerV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_quantize(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiQuantize(type, one, min, max, ditheramplitude);
	return self;

}
	
IoObject *IoRenderMan_display(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtToken mode;
	mode = IoMessage_locals_cStringArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiContext(DATA(self)->riContext);
	RiDisplayV(name, type, mode, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_gaussianFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat y;
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiGaussianFilter(x, y, xwidth, ywidth);
	return self;

}
	
IoObject *IoRenderMan_boxFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat y;
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiBoxFilter(x, y, xwidth, ywidth);
	return self;

}
	
IoObject *IoRenderMan_mitchellFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat y;
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiMitchellFilter(x, y, xwidth, ywidth);
	return self;

}
	
IoObject *IoRenderMan_triangleFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat y;
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiTriangleFilter(x, y, xwidth, ywidth);
	return self;

}
	
IoObject *IoRenderMan_catmullRomFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat y;
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiCatmullRomFilter(x, y, xwidth, ywidth);
	return self;

}
	
IoObject *IoRenderMan_sincFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat y;
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiSincFilter(x, y, xwidth, ywidth);
	return self;

}
	
IoObject *IoRenderMan_diskFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat y;
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiDiskFilter(x, y, xwidth, ywidth);
	return self;

}
	
IoObject *IoRenderMan_besselFilter(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat x;
	x = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat y;
	y = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat xwidth;
	xwidth = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat ywidth;
	ywidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiBesselFilter(x, y, xwidth, ywidth);
	return self;

}
	
IoObject *IoRenderMan_hider(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiHiderV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_colorSamples(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt N;
	N = IoMessage_locals_intArgAt_(m, locals, 0);
	RtFloat* nRGB;
	int __nRGB_index;
	List* __nRGB_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	int __nRGB_length = List_size(__nRGB_list);
	nRGB = new RtFloat[__nRGB_length];
	for(__nRGB_index = 0; __nRGB_index<__nRGB_length; __nRGB_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nRGB_list, __nRGB_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		nRGB[__nRGB_index] = IoNumber_asFloat(entry);
	}
	RtFloat* RGBn;
	int __RGBn_index;
	List* __RGBn_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 2));
	int __RGBn_length = List_size(__RGBn_list);
	RGBn = new RtFloat[__RGBn_length];
	for(__RGBn_index = 0; __RGBn_index<__RGBn_length; __RGBn_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__RGBn_list, __RGBn_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		RGBn[__RGBn_index] = IoNumber_asFloat(entry);
	}
	RiContext(DATA(self)->riContext);
	RiColorSamples(N, nRGB, RGBn);
	delete[](nRGB);
	delete[](RGBn);
	return self;

}
	
IoObject *IoRenderMan_relativeDetail(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat relativedetail;
	relativedetail = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiRelativeDetail(relativedetail);
	return self;

}
	
IoObject *IoRenderMan_option(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiOptionV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_attributeBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiAttributeBegin();
	return self;

}
	
IoObject *IoRenderMan_attributeEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiAttributeEnd();
	return self;

}
	
IoObject *IoRenderMan_color(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtColor Cq;
	IoRenderMan_getPointArgument(m, locals, 0, Cq);
	RiContext(DATA(self)->riContext);
	RiColor(Cq);
	return self;

}
	
IoObject *IoRenderMan_opacity(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtColor Os;
	IoRenderMan_getPointArgument(m, locals, 0, Os);
	RiContext(DATA(self)->riContext);
	RiOpacity(Os);
	return self;

}
	
IoObject *IoRenderMan_textureCoordinates(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiTextureCoordinates(s1, t1, s2, t2, s3, t3, s4, t4);
	return self;

}
	
IoObject *IoRenderMan_lightSource(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RtLightHandle __retval = RiLightSourceV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	DATA(self)->lights.push_back(__retval);
	return IONUMBER(DATA(self)->lights.size()-1);

}
	
IoObject *IoRenderMan_areaLightSource(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RtLightHandle __retval = RiAreaLightSourceV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	DATA(self)->lights.push_back(__retval);
	return IONUMBER(DATA(self)->lights.size()-1);

}
	
IoObject *IoRenderMan_illuminate(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtLightHandle light;
	int __lightIndex = IoMessage_locals_intArgAt_(m, locals, 0);
	IOASSERT(__lightIndex < DATA(self)->lights.size(), "Invalid light handle.");
	light = DATA(self)->lights[__lightIndex];
	RtBoolean onoff;
	onoff = IoMessage_locals_boolArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiIlluminate(light, onoff);
	return self;

}
	
IoObject *IoRenderMan_surface(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiSurfaceV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_deformation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiDeformationV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_displacement(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiDisplacementV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_atmosphere(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiAtmosphereV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_interior(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiInteriorV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_exterior(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiExteriorV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_shaderLayer(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtToken layername;
	layername = IoMessage_locals_cStringArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiContext(DATA(self)->riContext);
	RiShaderLayerV(type, name, layername, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_connectShaderLayers(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiConnectShaderLayers(type, layer1, variable1, layer2, variable2);
	return self;

}
	
IoObject *IoRenderMan_shadingRate(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat size;
	size = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiShadingRate(size);
	return self;

}
	
IoObject *IoRenderMan_shadingInterpolation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiShadingInterpolation(type);
	return self;

}
	
IoObject *IoRenderMan_matte(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtBoolean onoff;
	onoff = IoMessage_locals_boolArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiMatte(onoff);
	return self;

}
	
IoObject *IoRenderMan_bound(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtBound bound;
	IoRenderMan_getBoundArgument(m, locals, 0, bound);
	RiContext(DATA(self)->riContext);
	RiBound(bound);
	return self;

}
	
IoObject *IoRenderMan_detail(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtBound bound;
	IoRenderMan_getBoundArgument(m, locals, 0, bound);
	RiContext(DATA(self)->riContext);
	RiDetail(bound);
	return self;

}
	
IoObject *IoRenderMan_detailRange(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat offlow;
	offlow = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat onlow;
	onlow = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat onhigh;
	onhigh = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat offhigh;
	offhigh = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiDetailRange(offlow, onlow, onhigh, offhigh);
	return self;

}
	
IoObject *IoRenderMan_geometricApproximation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtFloat value;
	value = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiGeometricApproximation(type, value);
	return self;

}
	
IoObject *IoRenderMan_orientation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken orientation;
	orientation = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiOrientation(orientation);
	return self;

}
	
IoObject *IoRenderMan_reverseOrientation(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiReverseOrientation();
	return self;

}
	
IoObject *IoRenderMan_sides(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nsides;
	nsides = IoMessage_locals_intArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiSides(nsides);
	return self;

}
	
IoObject *IoRenderMan_identity(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiIdentity();
	return self;

}
	
IoObject *IoRenderMan_transform(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtMatrix transform;
	IoRenderMan_getMatrixArgument(m, locals, 0, transform);
	RiContext(DATA(self)->riContext);
	RiTransform(transform);
	return self;

}
	
IoObject *IoRenderMan_concatTransform(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtMatrix transform;
	IoRenderMan_getMatrixArgument(m, locals, 0, transform);
	RiContext(DATA(self)->riContext);
	RiConcatTransform(transform);
	return self;

}
	
IoObject *IoRenderMan_perspective(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat fov;
	fov = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiPerspective(fov);
	return self;

}
	
IoObject *IoRenderMan_translate(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat dx;
	dx = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat dy;
	dy = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat dz;
	dz = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiContext(DATA(self)->riContext);
	RiTranslate(dx, dy, dz);
	return self;

}
	
IoObject *IoRenderMan_rotate(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat angle;
	angle = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat dx;
	dx = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat dy;
	dy = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RtFloat dz;
	dz = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiRotate(angle, dx, dy, dz);
	return self;

}
	
IoObject *IoRenderMan_scale(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat sx;
	sx = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat sy;
	sy = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat sz;
	sz = IoMessage_locals_doubleArgAt_(m, locals, 2);
	RiContext(DATA(self)->riContext);
	RiScale(sx, sy, sz);
	return self;

}
	
IoObject *IoRenderMan_skew(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiSkew(angle, dx1, dy1, dz1, dx2, dy2, dz2);
	return self;

}
	
IoObject *IoRenderMan_coordinateSystem(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken space;
	space = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiCoordinateSystem(space);
	return self;

}
	
IoObject *IoRenderMan_coordSysTransform(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken space;
	space = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiCoordSysTransform(space);
	return self;

}
	
IoObject *IoRenderMan_transformPoints(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken fromspace;
	fromspace = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtToken tospace;
	tospace = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtInt npoints;
	npoints = IoMessage_locals_intArgAt_(m, locals, 2);
	RtPoint* points;
	int __points_index;
	List* __points_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 3));
	int __points_length = List_size(__points_list);
	points = new RtPoint[__points_length];
	for(__points_index = 0; __points_index<__points_length; __points_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__points_list, __points_index));
		IOASSERT(ISVECTOR(entry), "Expected a list of vectors for RtPointArray");
		UArray* vector = IoSeq_rawUArray(entry);
		points[__points_index][0] = UArray_doubleAt_(vector, 0);
		points[__points_index][1] = UArray_doubleAt_(vector, 1);
		points[__points_index][2] = UArray_doubleAt_(vector, 2);
	}
	RiContext(DATA(self)->riContext);
	RiTransformPoints(fromspace, tospace, npoints, points);
	delete[](points);
	return self;

}
	
IoObject *IoRenderMan_transformBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiTransformBegin();
	return self;

}
	
IoObject *IoRenderMan_transformEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiTransformEnd();
	return self;

}
	
IoObject *IoRenderMan_resource(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken handle;
	handle = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 1);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 2, IoMessage_argCount(m) - 2, plist);
	RiContext(DATA(self)->riContext);
	RiResourceV(handle, type, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_resourceBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiResourceBegin();
	return self;

}
	
IoObject *IoRenderMan_resourceEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiResourceEnd();
	return self;

}
	
IoObject *IoRenderMan_attribute(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiAttributeV(name, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_polygon(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt nvertices;
	nvertices = IoMessage_locals_intArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiPolygonV(nvertices, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_generalPolygon(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiGeneralPolygonV(nloops, nverts, plist.count, plist.tokens, plist.values);
	delete[](nverts);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_pointsPolygons(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiPointsPolygonsV(npolys, nverts, verts, plist.count, plist.tokens, plist.values);
	delete[](nverts);
	delete[](verts);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_pointsGeneralPolygons(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiPointsGeneralPolygonsV(npolys, nloops, nverts, verts, plist.count, plist.tokens, plist.values);
	delete[](nloops);
	delete[](nverts);
	delete[](verts);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_basis(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtBasis ubasis;
	IoRenderMan_getMatrixArgument(m, locals, 0, ubasis);
	RtInt ustep;
	ustep = IoMessage_locals_intArgAt_(m, locals, 1);
	RtBasis vbasis;
	IoRenderMan_getMatrixArgument(m, locals, 2, vbasis);
	RtInt vstep;
	vstep = IoMessage_locals_intArgAt_(m, locals, 3);
	RiContext(DATA(self)->riContext);
	RiBasis(ubasis, ustep, vbasis, vstep);
	return self;

}
	
IoObject *IoRenderMan_patch(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiPatchV(type, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_patchMesh(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiPatchMeshV(type, nu, uwrap, nv, vwrap, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_nuPatch(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiNuPatchV(nu, uorder, uknot, umin, umax, nv, vorder, vknot, vmin, vmax, plist.count, plist.tokens, plist.values);
	delete[](uknot);
	delete[](vknot);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_trimCurve(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiTrimCurve(nloops, ncurves, order, knot, min, max, n, u, v, w);
	delete[](ncurves);
	delete[](order);
	delete[](knot);
	delete[](min);
	delete[](max);
	delete[](n);
	delete[](u);
	delete[](v);
	delete[](w);
	return self;

}
	
IoObject *IoRenderMan_subdivisionMesh(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken scheme;
	scheme = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtInt nfaces;
	nfaces = IoMessage_locals_intArgAt_(m, locals, 1);
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
	RtInt* vertices;
	int __vertices_index;
	List* __vertices_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 3));
	int __vertices_length = List_size(__vertices_list);
	vertices = new RtInt[__vertices_length];
	for(__vertices_index = 0; __vertices_index<__vertices_length; __vertices_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__vertices_list, __vertices_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		vertices[__vertices_index] = IoNumber_asInt(entry);
	}
	RtInt ntags;
	ntags = IoMessage_locals_intArgAt_(m, locals, 4);
	RtToken* tags;
	int __tags_index;
	List* __tags_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 5));
	int __tags_length = List_size(__tags_list);
	tags = new RtToken[__tags_length];
	for(__tags_index = 0; __tags_index<__tags_length; __tags_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__tags_list, __tags_index));
		IOASSERT(ISSEQ(entry), "Expected a list of sequences for RtTokenArray");
		char* ioToken = IoSeq_asCString(entry);
		tags[__tags_index] = ioToken;
	}
	RtInt* nargs;
	int __nargs_index;
	List* __nargs_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 6));
	int __nargs_length = List_size(__nargs_list);
	nargs = new RtInt[__nargs_length];
	for(__nargs_index = 0; __nargs_index<__nargs_length; __nargs_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__nargs_list, __nargs_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		nargs[__nargs_index] = IoNumber_asInt(entry);
	}
	RtInt* intargs;
	int __intargs_index;
	List* __intargs_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 7));
	int __intargs_length = List_size(__intargs_list);
	intargs = new RtInt[__intargs_length];
	for(__intargs_index = 0; __intargs_index<__intargs_length; __intargs_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__intargs_list, __intargs_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtIntArray");
		intargs[__intargs_index] = IoNumber_asInt(entry);
	}
	RtFloat* floatargs;
	int __floatargs_index;
	List* __floatargs_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 8));
	int __floatargs_length = List_size(__floatargs_list);
	floatargs = new RtFloat[__floatargs_length];
	for(__floatargs_index = 0; __floatargs_index<__floatargs_length; __floatargs_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__floatargs_list, __floatargs_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		floatargs[__floatargs_index] = IoNumber_asFloat(entry);
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 9, IoMessage_argCount(m) - 9, plist);
	RiContext(DATA(self)->riContext);
	RiSubdivisionMeshV(scheme, nfaces, nvertices, vertices, ntags, tags, nargs, intargs, floatargs, plist.count, plist.tokens, plist.values);
	delete[](nvertices);
	delete[](vertices);
	// RtTokenArray not yet supported.
	delete[](tags);
	delete[](nargs);
	delete[](intargs);
	delete[](floatargs);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_sphere(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiSphereV(radius, zmin, zmax, thetamax, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_cone(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat height;
	height = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat radius;
	radius = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat thetamax;
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiContext(DATA(self)->riContext);
	RiConeV(height, radius, thetamax, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_cylinder(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiCylinderV(radius, zmin, zmax, thetamax, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_hyperboloid(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtPoint point1;
	IoRenderMan_getPointArgument(m, locals, 0, point1);
	RtPoint point2;
	IoRenderMan_getPointArgument(m, locals, 1, point2);
	RtFloat thetamax;
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiContext(DATA(self)->riContext);
	RiHyperboloidV(point1, point2, thetamax, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_paraboloid(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiParaboloidV(rmax, zmin, zmax, thetamax, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_disk(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtFloat height;
	height = IoMessage_locals_doubleArgAt_(m, locals, 0);
	RtFloat radius;
	radius = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RtFloat thetamax;
	thetamax = IoMessage_locals_doubleArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiContext(DATA(self)->riContext);
	RiDiskV(height, radius, thetamax, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_torus(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiTorusV(majorrad, minorrad, phimin, phimax, thetamax, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_points(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt npoints;
	npoints = IoMessage_locals_intArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiPointsV(npoints, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_curves(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	RiContext(DATA(self)->riContext);
	RiCurvesV(type, ncurves, nvertices, wrap, plist.count, plist.tokens, plist.values);
	delete[](nvertices);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_blobby(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
		IOASSERT(ISSEQ(entry), "Expected a list of sequences for RtTokenArray");
		char* ioToken = IoSeq_asCString(entry);
		str[__str_index] = ioToken;
	}
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 7, IoMessage_argCount(m) - 7, plist);
	RiContext(DATA(self)->riContext);
	RiBlobbyV(nleaf, ncode, code, nflt, flt, nstr, str, plist.count, plist.tokens, plist.values);
	delete[](code);
	delete[](flt);
	// RtTokenArray not yet supported.
	delete[](str);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_procFree(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtPointer data;
	// Unhandled type "RtPointer".
	RiContext(DATA(self)->riContext);
	RiProcFree(data);
	return self;

}
	
IoObject *IoRenderMan_procDelayedReadArchive(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtPointer data;
	// Unhandled type "RtPointer".
	RtFloat detail;
	detail = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiProcDelayedReadArchive(data, detail);
	return self;

}
	
IoObject *IoRenderMan_procRunProgram(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtPointer data;
	// Unhandled type "RtPointer".
	RtFloat detail;
	detail = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiProcRunProgram(data, detail);
	return self;

}
	
IoObject *IoRenderMan_procDynamicLoad(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtPointer data;
	// Unhandled type "RtPointer".
	RtFloat detail;
	detail = IoMessage_locals_doubleArgAt_(m, locals, 1);
	RiContext(DATA(self)->riContext);
	RiProcDynamicLoad(data, detail);
	return self;

}
	
IoObject *IoRenderMan_geometry(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 1, IoMessage_argCount(m) - 1, plist);
	RiContext(DATA(self)->riContext);
	RiGeometryV(type, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_solidBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RiContext(DATA(self)->riContext);
	RiSolidBegin(type);
	return self;

}
	
IoObject *IoRenderMan_solidEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiSolidEnd();
	return self;

}
	
IoObject *IoRenderMan_objectBegin(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RtObjectHandle __retval = RiObjectBegin();
	DATA(self)->objects.push_back(__retval);
	return IONUMBER(DATA(self)->objects.size()-1);

}
	
IoObject *IoRenderMan_objectEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiObjectEnd();
	return self;

}
	
IoObject *IoRenderMan_objectInstance(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtObjectHandle handle;
	int __objectIndex = IoMessage_locals_intArgAt_(m, locals, 0);
	IOASSERT(__objectIndex < DATA(self)->objects.size(), "Invalid object handle.");
	handle = DATA(self)->lights[__objectIndex];
	RiContext(DATA(self)->riContext);
	RiObjectInstance(handle);
	return self;

}
	
IoObject *IoRenderMan_motionBeginV(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt N;
	N = IoMessage_locals_intArgAt_(m, locals, 0);
	RtFloat* times;
	int __times_index;
	List* __times_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, 1));
	int __times_length = List_size(__times_list);
	times = new RtFloat[__times_length];
	for(__times_index = 0; __times_index<__times_length; __times_index++)
	{
		IoObject* entry = reinterpret_cast<IoObject*>(List_at_(__times_list, __times_index));
		IOASSERT(ISNUMBER(entry), "Expected a list of numbers for RtFloatArray");
		times[__times_index] = IoNumber_asFloat(entry);
	}
	RiContext(DATA(self)->riContext);
	RiMotionBeginV(N, times);
	delete[](times);
	return self;

}
	
IoObject *IoRenderMan_motionEnd(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RiContext(DATA(self)->riContext);
	RiMotionEnd();
	return self;

}
	
IoObject *IoRenderMan_makeTexture(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	const char* __filterfunc_name = IoMessage_locals_cStringArgAt_(m, locals, 4);
	filterfunc = IoRenderMan_getFilterFromName(__filterfunc_name);
	RtFloat swidth;
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 5);
	RtFloat twidth;
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 6);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 7, IoMessage_argCount(m) - 7, plist);
	RiContext(DATA(self)->riContext);
	RiMakeTextureV(imagefile, texturefile, swrap, twrap, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_makeBump(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString imagefile;
	imagefile = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtString bumpfile;
	bumpfile = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtToken swrap;
	swrap = IoMessage_locals_cStringArgAt_(m, locals, 2);
	RtToken twrap;
	twrap = IoMessage_locals_cStringArgAt_(m, locals, 3);
	RtFilterFunc filterfunc;
	const char* __filterfunc_name = IoMessage_locals_cStringArgAt_(m, locals, 4);
	filterfunc = IoRenderMan_getFilterFromName(__filterfunc_name);
	RtFloat swidth;
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 5);
	RtFloat twidth;
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 6);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 7, IoMessage_argCount(m) - 7, plist);
	RiContext(DATA(self)->riContext);
	RiMakeBumpV(imagefile, bumpfile, swrap, twrap, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_makeLatLongEnvironment(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString imagefile;
	imagefile = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtString reflfile;
	reflfile = IoMessage_locals_cStringArgAt_(m, locals, 1);
	RtFilterFunc filterfunc;
	const char* __filterfunc_name = IoMessage_locals_cStringArgAt_(m, locals, 2);
	filterfunc = IoRenderMan_getFilterFromName(__filterfunc_name);
	RtFloat swidth;
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 3);
	RtFloat twidth;
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 4);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 5, IoMessage_argCount(m) - 5, plist);
	RiContext(DATA(self)->riContext);
	RiMakeLatLongEnvironmentV(imagefile, reflfile, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_makeCubeFaceEnvironment(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
	const char* __filterfunc_name = IoMessage_locals_cStringArgAt_(m, locals, 8);
	filterfunc = IoRenderMan_getFilterFromName(__filterfunc_name);
	RtFloat swidth;
	swidth = IoMessage_locals_doubleArgAt_(m, locals, 9);
	RtFloat twidth;
	twidth = IoMessage_locals_doubleArgAt_(m, locals, 10);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 11, IoMessage_argCount(m) - 11, plist);
	RiContext(DATA(self)->riContext);
	RiMakeCubeFaceEnvironmentV(px, nx, py, ny, pz, nz, reflfile, fov, filterfunc, swidth, twidth, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_makeShadow(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtString picfile;
	picfile = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtString shadowfile;
	shadowfile = IoMessage_locals_cStringArgAt_(m, locals, 1);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 2, IoMessage_argCount(m) - 2, plist);
	RiContext(DATA(self)->riContext);
	RiMakeShadowV(picfile, shadowfile, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_makeOcclusion(IoRenderMan* self, IoObject* locals, IoMessage* m)
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
		IOASSERT(ISSEQ(entry), "Expected a list of sequences for RtStringArray");
		char* ioToken = IoSeq_asCString(entry);
		picfiles[__picfiles_index] = ioToken;
	}
	RtString shadowfile;
	shadowfile = IoMessage_locals_cStringArgAt_(m, locals, 2);
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 3, IoMessage_argCount(m) - 3, plist);
	RiContext(DATA(self)->riContext);
	RiMakeOcclusionV(npics, picfiles, shadowfile, plist.count, plist.tokens, plist.values);
	// RtStringArray not yet supported.
	delete[](picfiles);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	
IoObject *IoRenderMan_errorHandler(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtErrorFunc handler;
	handler = RiErrorPrint;
	RiContext(DATA(self)->riContext);
	RiErrorHandler(handler);
	return self;

}
	
IoObject *IoRenderMan_errorIgnore(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt code;
	code = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt severity;
	severity = IoMessage_locals_intArgAt_(m, locals, 1);
	RtString message;
	message = IoMessage_locals_cStringArgAt_(m, locals, 2);
	RiContext(DATA(self)->riContext);
	RiErrorIgnore(code, severity, message);
	return self;

}
	
IoObject *IoRenderMan_errorPrint(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt code;
	code = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt severity;
	severity = IoMessage_locals_intArgAt_(m, locals, 1);
	RtString message;
	message = IoMessage_locals_cStringArgAt_(m, locals, 2);
	RiContext(DATA(self)->riContext);
	RiErrorPrint(code, severity, message);
	return self;

}
	
IoObject *IoRenderMan_errorAbort(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtInt code;
	code = IoMessage_locals_intArgAt_(m, locals, 0);
	RtInt severity;
	severity = IoMessage_locals_intArgAt_(m, locals, 1);
	RtString message;
	message = IoMessage_locals_cStringArgAt_(m, locals, 2);
	RiContext(DATA(self)->riContext);
	RiErrorAbort(code, severity, message);
	return self;

}
	
IoObject *IoRenderMan_archiveRecord(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken type;
	type = IoMessage_locals_cStringArgAt_(m, locals, 0);
	char * format;
	format = IoMessage_locals_cStringArgAt_(m, locals, 1);
	// Unhandled type "".
	RiContext(DATA(self)->riContext);
	RiArchiveRecord(type, format);
	return self;

}
	
IoObject *IoRenderMan_readArchive(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
	RtToken name;
	name = IoMessage_locals_cStringArgAt_(m, locals, 0);
	RtArchiveCallback callback;
	callback = 0;
	IoRenderManParameterList plist;
	IoRenderMan_getParameterList(self, locals, m, 2, IoMessage_argCount(m) - 2, plist);
	RiContext(DATA(self)->riContext);
	RiReadArchiveV(name, callback, plist.count, plist.tokens, plist.values);
	IoRenderMan_freeParameterList(plist);
	return self;

}
	

