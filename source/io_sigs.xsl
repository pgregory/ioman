<?xml version="1.0" encoding="UTF-8" ?>


<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:output method="text"/>
	<xsl:strip-space elements="RiAPI"/>
	<xsl:include href="utils.xsl"/>


	<!--	API	-->
	<xsl:template match="RiAPI">
		<!--	Procedures	-->
// Automatically generated from the api.xml via io_sigs.xsl, do not hand edit!
IoMethodTable methodTable[] = {
<xsl:apply-templates select="Procedures/Procedure[Rib and not(Name = 'RiMotionBegin')]"/>
	{NULL, NULL},
};
	</xsl:template>


	<xsl:template match="Procedure">
		<xsl:variable name="prettyName">
			<xsl:apply-templates select="." mode="procedure_name"/>
		</xsl:variable>
		<xsl:value-of select="concat('&#x9;{&quot;', $prettyName, '&quot;, IoRenderMan_', $prettyName, '},&#xa;')"/>
	</xsl:template>

</xsl:stylesheet>
