RenderMan do (

	# Implement wrapper functions for the begin/end states in RenderMan, allowing a more
	# concise representation of these block elements.
	
	# RiFrameBegin/End
	frame := method(fno,
		frameBegin(fno)
		call evalArgAt(1)
		frameEnd
	)	

	# RiWorldBegin/End
	world := method(
		worldBegin
		call evalArgAt(0)
		worldEnd
	)	

	# RiTransformBegin/End
	transform := method(
		transformBegin
		call evalArgAt(0)
		transformEnd
	)	

	# RiAttributeBegin/End
	attribute := method(
		attributeBegin
		call evalArgAt(0)
		attributeEnd
	)	

	# RiSolidBegin/End
	solid := method(type,
		solidBegin(type)
		call evalArgAt(1)
		solidEnd
	)

	# RiObjectBegin/End
	object := method(
		RtObjectHandle obj := objectBegin
		call evalArgAt(0)
		objectEnd
		return obj
	)
)
