<?xml version='1.0'?>
<!--############################################################################# 
|	$Id: //WIFI_SOC/release/SDK_4_1_0_0/source/user/samba-3.0.37/docs-xml/xslt/db2latex-xsl/xsl/slides/slidestoc.mod.xsl#1 $
|- #############################################################################
|	$Author: bruce.chang $
|														
|   PURPOSE:
+ ############################################################################## -->

<xsl:stylesheet 
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:doc="http://nwalsh.com/xsl/documentation/1.0"
    exclude-result-prefixes="doc" version='1.0'>


    <!--############################################################################# -->
    <!-- DOCUMENTATION                                                                -->
    <doc:reference id="slides" xmlns="">
    </doc:reference>
    <!--############################################################################# -->


<xsl:template match="slides" mode="toc">
<xsl:call-template name="label.id"/>
</xsl:template>

<xsl:template match="title|titleabbrev" mode="toc">
  <xsl:apply-templates mode="toc"/>
</xsl:template>

<xsl:template match="speakernotes" mode="toc">
</xsl:template>

</xsl:stylesheet>
