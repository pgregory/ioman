AddonBuilder clone do(
	dependsOnLib("aqsis_ri2rib")

	dependsOnHeader("ri.h")
	appendHeaderSearchPath("/home/pgregory/aqsis/trunk/install/include/aqsis")
	appendLibSearchPath("/home/pgregory/aqsis/trunk/install/lib")
)

