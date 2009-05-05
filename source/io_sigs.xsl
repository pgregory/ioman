<?xml version="1.0" encoding="UTF-8" ?>


<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:output method="text"/>
	<xsl:strip-space elements="RiAPI"/>


	<!--	API	-->
	<xsl:template match="RiAPI">
		<!--	Procedures	-->
// Automatically generated from the api.xml via io_sigs.xsl, do not hand edit!
IoMethodTable methodTable[] = {
<xsl:apply-templates select="Procedures/Procedure[Rib and not(Rib/CustomImpl)]"/>
    {NULL, NULL},
};
	</xsl:template>


	<xsl:template match="Procedure">
		<xsl:value-of select="concat('&#x9;&#x9;{&quot;', Name, '&quot;, IoRenderMan_', Name, '},&#xa;')"/>
	</xsl:template>

</xsl:stylesheet>
