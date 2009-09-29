RenderMan do (

	clone := method(return self)

	# Implement wrapper functions for the begin/end states in RenderMan, allowing a more
	# concise representation of these block elements.
	
	# RiFrameBegin/End
	frame := method(fno,
		frameBegin(fno)
		call target doMessage(call message argAt(1), call sender)
		frameEnd
	)	

	# RiWorldBegin/End
	world := method(
		worldBegin
		call target doMessage(call message argAt(0), call sender)
		worldEnd
	)	

	# RiTransformBegin/End
	transform := method(
		transformBegin
		call target doMessage(call message argAt(0), call sender)
		transformEnd
	)	

	# RiAttributeBegin/End
	attribute := method(
		attributeBegin
		call target doMessage(call message argAt(0), call sender)
		attributeEnd
	)	

	# RiSolidBegin/End
	solid := method(type,
		solidBegin(type)
		call target doMessage(call message argAt(1), call sender)
		solidEnd
	)

	# RiObjectBegin/End
	object := method(
		RtObjectHandle obj := objectBegin
		call target doMessage(call message argAt(0), call sender)
		objectEnd
		return obj
	)
)
