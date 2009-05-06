<?xml version="1.0" encoding="UTF-8" ?>

<!DOCTYPE interface [
	<!ENTITY cr "&#xa;">
	<!ENTITY tab "&#x9;">
	<!-- Ugly hack - need to redeclare xmlns:xsl to workaround an xsltproc bug. -->
	<!ENTITY space "<xsl:text xmlns:xsl='http://www.w3.org/1999/XSL/Transform'> </xsl:text>">
]>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:output method="text"/>
	<xsl:strip-space elements="RiAPI"/>


	<!-- Get the Io style procedure name.
	-->
	<xsl:template match="Procedure" mode="procedure_name">
		<xsl:value-of select="concat(translate(substring(substring-after(Name, 'Ri'), 1, 1), 'ABCDEFGHIJKLMNOPQRSTUVWXYZ', 'abcdefghijklmnopqrstuvwxyz'), substring(substring-after(Name, 'Ri'), 2))"/>
	</xsl:template>


</xsl:stylesheet>
