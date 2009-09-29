AddonBuilder clone do(
	dependsOnLib("aqsis_ri2rib")
	dependsOnLib("aqsis_util")
	dependsOnLib("aqsis_riutil")

	dependsOnHeader("ri.h")
	AqsisRoot := System getEnvironmentVariable("AQSIS_ROOT") ifNilEval("/usr")
	BoostIncludePath := System getEnvironmentVariable("BOOST_INCLUDE_PATH") ifNilEval("/usr/include")

	appendHeaderSearchPath(AqsisRoot .. "/include")
	appendHeaderSearchPath(AqsisRoot .. "/include/aqsis/ri")
	appendHeaderSearchPath(AqsisRoot .. "/include/aqsis/riutil")
	appendHeaderSearchPath(BoostIncludePath)
	appendLibSearchPath(AqsisRoot .. "/lib")
)

