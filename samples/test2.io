blade := Object clone do (
	length := 2
	width := 0.3
	thickness := 0.1

	with := method(length, width, thickness,
		u := self clone 
		u length := length
		u width := width
		u thickness := thickness
		u
	)

	render := method(rm,  
		left := - width / 2
		right := width / 2
		top := - thickness / 2
		bottom := thickness / 2
		rm transform(
			rm translate(0, 0, -length/2)
			rm transform(
				rm rotate(90, 1, 0, 0)
				rm rotate(180, 0, 0, 1)
				rm cylinder(width/2, top, bottom, 180)
				rm disk(top, width/2, 180)
				rm disk(bottom, width/2, 180)
			)
			rm patchMesh("bilinear", 2, "nonperiodic", 4, "periodic", Map with(
				"P", list(RtPoint {left, top, 0},
						  RtPoint {left, top, length},
						  RtPoint {right, top, 0},
						  RtPoint {right, top, length},
						  RtPoint {right, bottom, 0},
						  RtPoint {right, bottom, length},
						  RtPoint {left, bottom, 0},
						  RtPoint {left, bottom, length}))
						)
			rm transform(
				rm translate(0,0,length)
				rm rotate(90, 1, 0, 0)
				rm cylinder(width/2, top, bottom, 180)
				rm disk(top, width/2, 180)
				rm disk(bottom, width/2, 180)
			)
		)
	)
)

scissor := Object clone do(
	segments := 5
	extension := 0.5

	with := method(segments, blade_length, blade_width, blade_thickness,
		u := self clone
		u segments := segments
		u blade := blade with(blade_length, blade_width, blade_thickness)
		u minangle := (blade_width / blade_length) * (180/Number constants pi)
		u maxangle := 90 - u minangle
		u
	)
			
	render := method(rm,
		0 to(segments) foreach(n, 
			angle := 90 - (((90 * extension) max(minangle)) min(maxangle))
			offset := blade length * (((90 - angle) * (Number constants pi / 180)) sin)
			rm transform(
				rm rotate(-angle, 0, 1, 0)
				rm blade render(rm)
				rm rotate(2 * angle, 0, 1, 0)
				rm translate(0, blade thickness, 0)
				blade render(rm)
			)
			rm translate(0, 0, offset)
		)
	)
)


rm := RenderMan clone 

rm frame(1,
	rm format(320, 240, 1)
	rm display("test.tif", "framebuffer", "rgba", Map with("string compression", "lzw"))
	rm projection("perspective", Map with("fov", 50))
	rm translate(0,0,4)
	rm rotate(-50, 1,1,0)
	rm world(
		scissor with(5, 2, 0.3, 0.1, 0.8) render(rm)
	)
)
