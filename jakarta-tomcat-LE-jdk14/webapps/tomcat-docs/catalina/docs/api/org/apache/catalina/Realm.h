<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN""http://www.w3.org/TR/REC-html40/loose.dtd">
<!--NewPage-->
<HTML>
<HEAD>
<!-- Generated by javadoc on Wed Mar 19 10:40:50 CET 2003 -->
<TITLE>
Realm (Catalina Internal API Documentation)
</TITLE>
<META NAME="keywords" CONTENT="org.apache.catalina.Realm,Realm interface">
<LINK REL ="stylesheet" TYPE="text/css" HREF="../../../stylesheet.css" TITLE="Style">
</HEAD>
<SCRIPT>
function asd()
{
parent.document.title="Realm (Catalina Internal API Documentation)";
}
</SCRIPT>
<BODY BGCOLOR="white" onload="asd();">

<!-- ========== START OF NAVBAR ========== -->
<A NAME="navbar_top"><!-- --></A>
<TABLE BORDER="0" WIDTH="100%" CELLPADDING="1" CELLSPACING="0">
<TR>
<TD COLSPAN=3 BGCOLOR="#EEEEFF" CLASS="NavBarCell1">
<A NAME="navbar_top_firstrow"><!-- --></A>
<TABLE BORDER="0" CELLPADDING="0" CELLSPACING="3">
  <TR ALIGN="center" VALIGN="top">
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../overview-summary.html"><FONT CLASS="NavBarFont1"><B>Overview</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-summary.html"><FONT CLASS="NavBarFont1"><B>Package</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#FFFFFF" CLASS="NavBarCell1Rev"> &nbsp;<FONT CLASS="NavBarFont1Rev"><B>Class</B></FONT>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-tree.html"><FONT CLASS="NavBarFont1"><B>Tree</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../deprecated-list.html"><FONT CLASS="NavBarFont1"><B>Deprecated</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../index-all.html"><FONT CLASS="NavBarFont1"><B>Index</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../help-doc.html"><FONT CLASS="NavBarFont1"><B>Help</B></FONT></A>&nbsp;</TD>
  </TR>
</TABLE>
</TD>
<TD ALIGN="right" VALIGN="top" ROWSPAN=3><EM>
</EM>
</TD>
</TR>

<TR>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
&nbsp;<A HREF="../../../org/apache/catalina/Pipeline.html"><B>PREV CLASS</B></A>&nbsp;
&nbsp;<A HREF="../../../org/apache/catalina/Request.html"><B>NEXT CLASS</B></A></FONT></TD>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
  <A HREF="../../../index.html" TARGET="_top"><B>FRAMES</B></A>  &nbsp;
&nbsp;<A HREF="Realm.html" TARGET="_top"><B>NO FRAMES</B></A>  &nbsp;
&nbsp;
<SCRIPT>
  <!--
  if(window==top) {
    document.writeln('<A HREF="../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>');
  }
  //-->
</SCRIPT>
<NOSCRIPT>
<A HREF="../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>
</NOSCRIPT>
</FONT></TD>
</TR>
<TR>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
  SUMMARY:&nbsp;NESTED&nbsp;|&nbsp;FIELD&nbsp;|&nbsp;CONSTR&nbsp;|&nbsp;<A HREF="#method_summary">METHOD</A></FONT></TD>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
DETAIL:&nbsp;FIELD&nbsp;|&nbsp;CONSTR&nbsp;|&nbsp;<A HREF="#method_detail">METHOD</A></FONT></TD>
</TR>
</TABLE>
<!-- =========== END OF NAVBAR =========== -->

<HR>
<!-- ======== START OF CLASS DATA ======== -->
<H2>
<FONT SIZE="-1">
org.apache.catalina</FONT>
<BR>
Interface Realm</H2>
<DL>
<DT><B>All Known Implementing Classes:</B> <DD><A HREF="../../../org/apache/catalina/realm/JAASMemoryLoginModule.html">JAASMemoryLoginModule</A>, <A HREF="../../../org/apache/catalina/realm/RealmBase.html">RealmBase</A></DD>
</DL>
<HR>
<DL>
<DT>public interface <B>Realm</B></DL>

<P>
A <b>Realm</b> is a read-only facade for an underlying security realm
 used to authenticate individual users, and identify the security roles
 associated with those users.  Realms can be attached at any Container
 level, but will typically only be attached to a Context, or higher level,
 Container.
<P>

<P>
<DL>
<DT><B>Version:</B></DT>
  <DD>$Revision: 1.4 $ $Date: 2001/07/30 20:04:04 $</DD>
<DT><B>Author:</B></DT>
  <DD>Craig R. McClanahan</DD>
</DL>
<HR>

<P>
<!-- ======== NESTED CLASS SUMMARY ======== -->


<!-- =========== FIELD SUMMARY =========== -->


<!-- ======== CONSTRUCTOR SUMMARY ======== -->


<!-- ========== METHOD SUMMARY =========== -->

<A NAME="method_summary"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=2><FONT SIZE="+2">
<B>Method Summary</B></FONT></TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;void</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#addPropertyChangeListener(java.beans.PropertyChangeListener)">addPropertyChangeListener</A></B>(java.beans.PropertyChangeListener&nbsp;listener)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Add a property change listener to this component.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.security.Principal</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#authenticate(java.lang.String, byte[])">authenticate</A></B>(java.lang.String&nbsp;username,
             byte[]&nbsp;credentials)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Return the Principal associated with the specified username and
 credentials, if there is one; otherwise return <code>null</code>.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.security.Principal</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#authenticate(java.lang.String, java.lang.String)">authenticate</A></B>(java.lang.String&nbsp;username,
             java.lang.String&nbsp;credentials)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Return the Principal associated with the specified username and
 credentials, if there is one; otherwise return <code>null</code>.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.security.Principal</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#authenticate(java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String)">authenticate</A></B>(java.lang.String&nbsp;username,
             java.lang.String&nbsp;digest,
             java.lang.String&nbsp;nonce,
             java.lang.String&nbsp;nc,
             java.lang.String&nbsp;cnonce,
             java.lang.String&nbsp;qop,
             java.lang.String&nbsp;realm,
             java.lang.String&nbsp;md5a2)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Return the Principal associated with the specified username, which
 matches the digest calculated using the given parameters using the
 method described in RFC 2069; otherwise return <code>null</code>.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.security.Principal</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#authenticate(java.security.cert.X509Certificate[])">authenticate</A></B>(java.security.cert.X509Certificate[]&nbsp;certs)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Return the Principal associated with the specified chain of X509
 client certificates.  </TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;<A HREF="../../../org/apache/catalina/Container.html">Container</A></CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#getContainer()">getContainer</A></B>()</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Return the Container with which this Realm has been associated.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.lang.String</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#getInfo()">getInfo</A></B>()</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Return descriptive information about this Realm implementation and
 the corresponding version number, in the format
 <code>&lt;description&gt;/&lt;version&gt;</code>.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;boolean</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#hasRole(java.security.Principal, java.lang.String)">hasRole</A></B>(java.security.Principal&nbsp;principal,
        java.lang.String&nbsp;role)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Return <code>true</code> if the specified Principal has the specified
 security role, within the context of this Realm; otherwise return
 <code>false</code>.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;void</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#removePropertyChangeListener(java.beans.PropertyChangeListener)">removePropertyChangeListener</A></B>(java.beans.PropertyChangeListener&nbsp;listener)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Remove a property change listener from this component.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;void</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Realm.html#setContainer(org.apache.catalina.Container)">setContainer</A></B>(<A HREF="../../../org/apache/catalina/Container.html">Container</A>&nbsp;container)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Set the Container with which this Realm has been associated.</TD>
</TR>
</TABLE>
&nbsp;
<P>

<!-- ============ FIELD DETAIL =========== -->


<!-- ========= CONSTRUCTOR DETAIL ======== -->


<!-- ============ METHOD DETAIL ========== -->

<A NAME="method_detail"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=1><FONT SIZE="+2">
<B>Method Detail</B></FONT></TD>
</TR>
</TABLE>

<A NAME="getContainer()"><!-- --></A><H3>
getContainer</H3>
<PRE>
public <A HREF="../../../org/apache/catalina/Container.html">Container</A> <B>getContainer</B>()</PRE>
<DL>
<DD>Return the Container with which this Realm has been associated.
<P>
<DD><DL>
</DL>
</DD>
</DL>
<HR>

<A NAME="setContainer(org.apache.catalina.Container)"><!-- --></A><H3>
setContainer</H3>
<PRE>
public void <B>setContainer</B>(<A HREF="../../../org/apache/catalina/Container.html">Container</A>&nbsp;container)</PRE>
<DL>
<DD>Set the Container with which this Realm has been associated.
<P>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>container</CODE> - The associated Container</DL>
</DD>
</DL>
<HR>

<A NAME="getInfo()"><!-- --></A><H3>
getInfo</H3>
<PRE>
public java.lang.String <B>getInfo</B>()</PRE>
<DL>
<DD>Return descriptive information about this Realm implementation and
 the corresponding version number, in the format
 <code>&lt;description&gt;/&lt;version&gt;</code>.
<P>
<DD><DL>
</DL>
</DD>
</DL>
<HR>

<A NAME="addPropertyChangeListener(java.beans.PropertyChangeListener)"><!-- --></A><H3>
addPropertyChangeListener</H3>
<PRE>
public void <B>addPropertyChangeListener</B>(java.beans.PropertyChangeListener&nbsp;listener)</PRE>
<DL>
<DD>Add a property change listener to this component.
<P>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>listener</CODE> - The listener to add</DL>
</DD>
</DL>
<HR>

<A NAME="authenticate(java.lang.String, java.lang.String)"><!-- --></A><H3>
authenticate</H3>
<PRE>
public java.security.Principal <B>authenticate</B>(java.lang.String&nbsp;username,
                                            java.lang.String&nbsp;credentials)</PRE>
<DL>
<DD>Return the Principal associated with the specified username and
 credentials, if there is one; otherwise return <code>null</code>.
<P>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>username</CODE> - Username of the Principal to look up<DD><CODE>credentials</CODE> - Password or other credentials to use in
  authenticating this username</DL>
</DD>
</DL>
<HR>

<A NAME="authenticate(java.lang.String, byte[])"><!-- --></A><H3>
authenticate</H3>
<PRE>
public java.security.Principal <B>authenticate</B>(java.lang.String&nbsp;username,
                                            byte[]&nbsp;credentials)</PRE>
<DL>
<DD>Return the Principal associated with the specified username and
 credentials, if there is one; otherwise return <code>null</code>.
<P>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>username</CODE> - Username of the Principal to look up<DD><CODE>credentials</CODE> - Password or other credentials to use in
  authenticating this username</DL>
</DD>
</DL>
<HR>

<A NAME="authenticate(java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String)"><!-- --></A><H3>
authenticate</H3>
<PRE>
public java.security.Principal <B>authenticate</B>(java.lang.String&nbsp;username,
                                            java.lang.String&nbsp;digest,
                                            java.lang.String&nbsp;nonce,
                                            java.lang.String&nbsp;nc,
                                            java.lang.String&nbsp;cnonce,
                                            java.lang.String&nbsp;qop,
                                            java.lang.String&nbsp;realm,
                                            java.lang.String&nbsp;md5a2)</PRE>
<DL>
<DD>Return the Principal associated with the specified username, which
 matches the digest calculated using the given parameters using the
 method described in RFC 2069; otherwise return <code>null</code>.
<P>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>username</CODE> - Username of the Principal to look up<DD><CODE>digest</CODE> - Digest which has been submitted by the client<DD><CODE>nonce</CODE> - Unique (or supposedly unique) token which has been used
 for this request<DD><CODE>realm</CODE> - Realm name<DD><CODE>md5a2</CODE> - Second MD5 digest used to calculate the digest :
 MD5(Method + ":" + uri)</DL>
</DD>
</DL>
<HR>

<A NAME="authenticate(java.security.cert.X509Certificate[])"><!-- --></A><H3>
authenticate</H3>
<PRE>
public java.security.Principal <B>authenticate</B>(java.security.cert.X509Certificate[]&nbsp;certs)</PRE>
<DL>
<DD>Return the Principal associated with the specified chain of X509
 client certificates.  If there is none, return <code>null</code>.
<P>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>certs</CODE> - Array of client certificates, with the first one in
  the array being the certificate of the client itself.</DL>
</DD>
</DL>
<HR>

<A NAME="hasRole(java.security.Principal, java.lang.String)"><!-- --></A><H3>
hasRole</H3>
<PRE>
public boolean <B>hasRole</B>(java.security.Principal&nbsp;principal,
                       java.lang.String&nbsp;role)</PRE>
<DL>
<DD>Return <code>true</code> if the specified Principal has the specified
 security role, within the context of this Realm; otherwise return
 <code>false</code>.
<P>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>principal</CODE> - Principal for whom the role is to be checked<DD><CODE>role</CODE> - Security role to be checked</DL>
</DD>
</DL>
<HR>

<A NAME="removePropertyChangeListener(java.beans.PropertyChangeListener)"><!-- --></A><H3>
removePropertyChangeListener</H3>
<PRE>
public void <B>removePropertyChangeListener</B>(java.beans.PropertyChangeListener&nbsp;listener)</PRE>
<DL>
<DD>Remove a property change listener from this component.
<P>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>listener</CODE> - The listener to remove</DL>
</DD>
</DL>
<!-- ========= END OF CLASS DATA ========= -->
<HR>

<!-- ========== START OF NAVBAR ========== -->
<A NAME="navbar_bottom"><!-- --></A>
<TABLE BORDER="0" WIDTH="100%" CELLPADDING="1" CELLSPACING="0">
<TR>
<TD COLSPAN=3 BGCOLOR="#EEEEFF" CLASS="NavBarCell1">
<A NAME="navbar_bottom_firstrow"><!-- --></A>
<TABLE BORDER="0" CELLPADDING="0" CELLSPACING="3">
  <TR ALIGN="center" VALIGN="top">
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../overview-summary.html"><FONT CLASS="NavBarFont1"><B>Overview</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-summary.html"><FONT CLASS="NavBarFont1"><B>Package</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#FFFFFF" CLASS="NavBarCell1Rev"> &nbsp;<FONT CLASS="NavBarFont1Rev"><B>Class</B></FONT>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-tree.html"><FONT CLASS="NavBarFont1"><B>Tree</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../deprecated-list.html"><FONT CLASS="NavBarFont1"><B>Deprecated</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../index-all.html"><FONT CLASS="NavBarFont1"><B>Index</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../help-doc.html"><FONT CLASS="NavBarFont1"><B>Help</B></FONT></A>&nbsp;</TD>
  </TR>
</TABLE>
</TD>
<TD ALIGN="right" VALIGN="top" ROWSPAN=3><EM>
</EM>
</TD>
</TR>

<TR>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
&nbsp;<A HREF="../../../org/apache/catalina/Pipeline.html"><B>PREV CLASS</B></A>&nbsp;
&nbsp;<A HREF="../../../org/apache/catalina/Request.html"><B>NEXT CLASS</B></A></FONT></TD>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
  <A HREF="../../../index.html" TARGET="_top"><B>FRAMES</B></A>  &nbsp;
&nbsp;<A HREF="Realm.html" TARGET="_top"><B>NO FRAMES</B></A>  &nbsp;
&nbsp;
<SCRIPT>
  <!--
  if(window==top) {
    document.writeln('<A HREF="../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>');
  }
  //-->
</SCRIPT>
<NOSCRIPT>
<A HREF="../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>
</NOSCRIPT>
</FONT></TD>
</TR>
<TR>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
  SUMMARY:&nbsp;NESTED&nbsp;|&nbsp;FIELD&nbsp;|&nbsp;CONSTR&nbsp;|&nbsp;<A HREF="#method_summary">METHOD</A></FONT></TD>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
DETAIL:&nbsp;FIELD&nbsp;|&nbsp;CONSTR&nbsp;|&nbsp;<A HREF="#method_detail">METHOD</A></FONT></TD>
</TR>
</TABLE>
<!-- =========== END OF NAVBAR =========== -->

<HR>
Copyright � 2000-2002 Apache Software Foundation.  All Rights Reserved.
</BODY>
</HTML>
