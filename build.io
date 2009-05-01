AddonBuilder clone do(
	dependsOnLib("aqsis_ri2rib")
	dependsOnLib("aqsis_types")

	dependsOnHeader("ri.h")
	AqsisRoot := System getEnvironmentVariable("AQSIS_ROOT") ifNilEval("/usr")
	BoostIncludePath := System getEnvironmentVariable("BOOST_INCLUDE_PATH") ifNilEval("/usr/include")

	appendHeaderSearchPath(AqsisRoot .. "/include/aqsis")
	appendHeaderSearchPath(BoostIncludePath)
	appendLibSearchPath(AqsisRoot .. "/lib")
)

