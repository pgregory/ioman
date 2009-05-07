<?xml version="1.0" encoding="UTF-8" ?>


<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:output method="text"/>
	<xsl:strip-space elements="RiAPI"/>
	<xsl:include href="utils.xsl"/>


	<!--	API	-->
	<xsl:template match="RiAPI">
// Automatically generated from the api.xml via io_sigs.xsl, do not hand edit!
		<!--	Procedures	-->
		<xsl:apply-templates select="Procedures/Procedure[Rib and not(Name = 'RiMotionBegin')]"/>
		<xsl:text>&#xa;&#xa;</xsl:text>
	</xsl:template>


	<xsl:template match="Procedure">
IoObject *IoRenderMan_<xsl:apply-templates select="." mode="procedure_name"/>(IoRenderMan* self, IoObject* locals, IoMessage* m)
{
<!-- Convert the arguments from Io messages -->
<xsl:apply-templates select="Arguments" mode="convert_from_message"/>
<!-- Call the C API function -->
<xsl:value-of select="string('&#x9;RiContext(DATA(self)->riContext);&#xa;')"/>
<xsl:choose>
	<xsl:when test="ReturnType = 'RtLightHandle' or ReturnType = 'RtObjectHandle'">
		<xsl:value-of select="concat('&#x9;', ReturnType, ' __retval = ', Name)"/>
	</xsl:when>
	<xsl:otherwise>
		<xsl:value-of select="concat('&#x9;', Name)"/>
	</xsl:otherwise>
</xsl:choose>
<xsl:if test="Arguments/ParamList">V</xsl:if>(<xsl:apply-templates select="Arguments" mode="pass_to_c_api"/><xsl:if test="Arguments/ParamList"><xsl:if test="count(Arguments/Argument)>0">, </xsl:if>plist.count, plist.tokens, plist.values</xsl:if>);
<!-- Clean up the argument data -->
<xsl:apply-templates select="Arguments" mode="cleanup"/>
<xsl:choose>
	<xsl:when test="ReturnType = 'RtLightHandle'">
		<xsl:value-of select="string('&#x9;DATA(self)->lights.push_back(__retval);&#xa;')"/>
		<xsl:value-of select="string('&#x9;return IONUMBER(DATA(self)->lights.size()-1);&#xa;')"/>
	</xsl:when>
	<xsl:when test="ReturnType = 'RtObjectHandle'">
		<xsl:value-of select="string('&#x9;DATA(self)->objects.push_back(__retval);&#xa;')"/>
		<xsl:value-of select="string('&#x9;return IONUMBER(DATA(self)->objects.size()-1);&#xa;')"/>
	</xsl:when>
	<xsl:otherwise>
		<xsl:value-of select="string('&#x9;return self;&#xa;')"/>
	</xsl:otherwise>
</xsl:choose>
}
	</xsl:template>

	<xsl:template match="Arguments" mode="convert_from_message">
		<xsl:apply-templates select="Argument" mode="convert_from_message"/>
		<!-- Read and prepare parameter list -->
		<xsl:if test="ParamList">
			<xsl:value-of select="string('&#x9;IoRenderManParameterList plist;&#xa;')"/>
			<xsl:value-of select="concat('&#x9;IoRenderMan_getParameterList(self, locals, m, ', count(Argument), ', IoMessage_argCount(m) - ', count(Argument), ', plist);&#xa;')"/>
		</xsl:if>
	</xsl:template>

	<xsl:template match="Argument" mode="convert_from_message">
		<xsl:choose>
			<xsl:when test="contains( Type, 'Array')">
				<xsl:value-of select="concat('&#x9;', substring-before(Type, 'Array'), '* ', Name, ';&#xa;')"/>
				<xsl:value-of select="concat('&#x9;int __', Name, '_index;&#xa;')"/>
				<xsl:value-of select="concat('&#x9;List* __', Name, '_list = IoList_rawList(IoMessage_locals_valueArgAt_(m, locals, ', position()-1, '));&#xa;')"/>
				<xsl:value-of select="concat('&#x9;int __', Name, '_length = List_size(__', Name, '_list);&#xa;')"/>
				<xsl:value-of select="concat('&#x9;', Name, ' = new ', substring-before(Type, 'Array'), '[__', Name, '_length];&#xa;')"/>
				<xsl:value-of select="concat('&#x9;for(__', Name, '_index = 0; __', Name, '_index&lt;__', Name, '_length; __', Name, '_index++)&#xa;')"/>
				<xsl:text>&#x9;{&#xa;</xsl:text>
				<xsl:value-of select="concat('&#x9;&#x9;IoObject* entry = reinterpret_cast&lt;IoObject*&gt;(List_at_(__', Name, '_list, __', Name, '_index));&#xa;')"/>
				<xsl:choose>
					<xsl:when test="Type = 'RtTokenArray' or Type = 'RtStringArray'">
						<xsl:value-of select="concat('&#x9;&#x9;IOASSERT(ISSEQ(entry), &quot;Expected a list of sequences for ', Type, '&quot;);&#xa;')"/>
						<xsl:value-of select="string('&#x9;&#x9;char* ioToken = IoSeq_asCString(entry);&#xa;')"/>
						<xsl:value-of select="concat('&#x9;&#x9;', Name, '[__', Name, '_index] = ioToken;&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtColorArray' or Type = 'RtPointArray'">
						<xsl:value-of select="concat('&#x9;&#x9;IOASSERT(ISVECTOR(entry), &quot;Expected a list of vectors for ', Type, '&quot;);&#xa;')"/>
						<xsl:value-of select="concat('&#x9;&#x9;UArray* vector = IoSeq_rawUArray(entry);&#xa;')"/>
						<xsl:value-of select="concat('&#x9;&#x9;', Name, '[__', Name, '_index][0] = UArray_doubleAt_(vector, 0);&#xa;')"/>
						<xsl:value-of select="concat('&#x9;&#x9;', Name, '[__', Name, '_index][1] = UArray_doubleAt_(vector, 1);&#xa;')"/>
						<xsl:value-of select="concat('&#x9;&#x9;', Name, '[__', Name, '_index][2] = UArray_doubleAt_(vector, 2);&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtFloatArray'">
						<xsl:value-of select="concat('&#x9;&#x9;IOASSERT(ISNUMBER(entry), &quot;Expected a list of numbers for ', Type, '&quot;);&#xa;')"/>
						<xsl:value-of select="concat('&#x9;&#x9;', Name, '[__', Name, '_index] = IoNumber_asFloat(entry);&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtIntArray'">
						<xsl:value-of select="concat('&#x9;&#x9;IOASSERT(ISNUMBER(entry), &quot;Expected a list of numbers for ', Type, '&quot;);&#xa;')"/>
						<xsl:value-of select="concat('&#x9;&#x9;', Name, '[__', Name, '_index] = IoNumber_asInt(entry);&#xa;')"/>
					</xsl:when>
					<xsl:otherwise>
						<xsl:value-of select="concat('&#x9;// Unsupported Array type ', Type, '.&#xa;')"/>
					</xsl:otherwise>
				</xsl:choose>
				<xsl:text>&#x9;}&#xa;</xsl:text>
			</xsl:when>
			<xsl:otherwise>
				<xsl:if test="Type != ''">
					<xsl:value-of select="concat('&#x9;', Type, ' ', Name, ';&#xa;')"/>
				</xsl:if>
				<xsl:choose>
					<xsl:when test="Type = 'RtBoolean'">
						<xsl:value-of select="concat('&#x9;', Name, ' = IoMessage_locals_boolArgAt_(m, locals, ', position()-1, ');&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtFloat'">
						<xsl:value-of select="concat('&#x9;', Name, ' = IoMessage_locals_doubleArgAt_(m, locals, ', position()-1, ');&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtInt'">
						<xsl:value-of select="concat('&#x9;', Name, ' = IoMessage_locals_intArgAt_(m, locals, ', position()-1, ');&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtToken' or Type = 'RtString'">
						<xsl:value-of select="concat('&#x9;', Name, ' = IoMessage_locals_cStringArgAt_(m, locals, ', position()-1, ');&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtPoint' or Type = 'RtColor'">
						<xsl:value-of select="concat('&#x9;IoRenderMan_getPointArgument(m, locals, ', position()-1, ', ', Name, ');&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtMatrix' or Type = 'RtBasis'">
						<xsl:value-of select="concat('&#x9;IoRenderMan_getMatrixArgument(m, locals, ', position()-1, ', ', Name, ');&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtBound'">
						<xsl:value-of select="concat('&#x9;IoRenderMan_getBoundArgument(m, locals, ', position()-1, ', ', Name, ');&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtLightHandle'">
						<xsl:value-of select="concat('&#x9;int __lightIndex = IoMessage_locals_intArgAt_(m, locals, ', position()-1, ');&#xa;')"/>
						<xsl:value-of select="string('&#x9;IOASSERT(__lightIndex &lt; DATA(self)-&gt;lights.size(), &quot;Invalid light handle.&quot;);&#xa;')"/>
						<xsl:value-of select="concat('&#x9;', Name, ' = DATA(self)-&gt;lights[__lightIndex];&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtObjectHandle'">
						<xsl:value-of select="concat('&#x9;int __objectIndex = IoMessage_locals_intArgAt_(m, locals, ', position()-1, ');&#xa;')"/>
						<xsl:value-of select="string('&#x9;IOASSERT(__objectIndex &lt; DATA(self)-&gt;objects.size(), &quot;Invalid object handle.&quot;);&#xa;')"/>
						<xsl:value-of select="concat('&#x9;', Name, ' = DATA(self)-&gt;lights[__objectIndex];&#xa;')"/>
					</xsl:when>
					<xsl:when test="Type = 'RtErrorFunc'">
						<xsl:value-of select="concat('&#x9;', Name, ' = RiErrorPrint;&#xa;')"/>
					</xsl:when>
					<xsl:otherwise>
						<xsl:value-of select="string('&#x9;// Unhandled type.&#xa;')"/>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>

	<!-- Pass the converted parameters to the C API function call -->
	<xsl:template match="Arguments" mode="pass_to_c_api">
		<xsl:apply-templates select="Argument" mode="pass_to_c_api"/>
	</xsl:template>

	<xsl:template match="Argument" mode="pass_to_c_api">
		<xsl:value-of select="Name"/>
		<xsl:if test="not(position()=last())">, </xsl:if>
	</xsl:template>

	<xsl:template match="Arguments" mode="cleanup">
		<xsl:apply-templates select="Argument" mode="cleanup"/>
		<!-- Read and prepare parameter list -->
		<xsl:if test="ParamList">
			<xsl:value-of select="string('&#x9;IoRenderMan_freeParameterList(plist);&#xa;')"/>
		</xsl:if>
	</xsl:template>

	<xsl:template match="Argument" mode="cleanup">
		<xsl:choose>
			<xsl:when test="contains( Type, 'Array')">
				<xsl:choose>
					<xsl:when test="Type = 'RtTokenArray' or Type = 'RtStringArray'">
						<xsl:value-of select="concat('&#x9;// ', Type, ' not yet supported.&#xa;')"/>
					</xsl:when>
				</xsl:choose>
				<xsl:value-of select="concat('&#x9;delete[](', Name, ');&#xa;')"/>
			</xsl:when>
		</xsl:choose>
	</xsl:template>
</xsl:stylesheet>
