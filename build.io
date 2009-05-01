AddonBuilder clone do(
	dependsOnLib("aqsis_ri2rib")

	dependsOnHeader("ri.h")
	AqsisRoot := System getEnvironmentVariable("AQSIS_ROOT") ifNilEval("/usr")

	appendHeaderSearchPath(AqsisRoot .. "/include/aqsis")
	appendLibSearchPath(AqsisRoot .. "/lib")
)

