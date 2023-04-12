#include <LDL/OpenGL/OpenGL1_0.hpp>

PFNGLCULLFACEPROC glCullFace = NULL;
PFNGLFRONTFACEPROC glFrontFace = NULL;
PFNGLHINTPROC glHint = NULL;
PFNGLLINEWIDTHPROC glLineWidth = NULL;
PFNGLPOINTSIZEPROC glPointSize = NULL;
PFNGLPOLYGONMODEPROC glPolygonMode = NULL;
PFNGLSCISSORPROC glScissor = NULL;
PFNGLTEXPARAMETERFPROC glTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC glTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC glTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC glTexParameteriv = NULL;
PFNGLTEXIMAGE1DPROC glTexImage1D = NULL;
PFNGLTEXIMAGE2DPROC glTexImage2D = NULL;
PFNGLDRAWBUFFERPROC glDrawBuffer = NULL;
PFNGLCLEARPROC glClear = NULL;
PFNGLCLEARCOLORPROC glClearColor = NULL;
PFNGLCLEARSTENCILPROC glClearStencil = NULL;
PFNGLCLEARDEPTHPROC glClearDepth = NULL;
PFNGLSTENCILMASKPROC glStencilMask = NULL;
PFNGLCOLORMASKPROC glColorMask = NULL;
PFNGLDEPTHMASKPROC glDepthMask = NULL;
PFNGLDISABLEPROC glDisable = NULL;
PFNGLENABLEPROC glEnable = NULL;
PFNGLFINISHPROC glFinish = NULL;
PFNGLFLUSHPROC glFlush = NULL;
PFNGLBLENDFUNCPROC glBlendFunc = NULL;
PFNGLLOGICOPPROC glLogicOp = NULL;
PFNGLSTENCILFUNCPROC glStencilFunc = NULL;
PFNGLSTENCILOPPROC glStencilOp = NULL;
PFNGLDEPTHFUNCPROC glDepthFunc = NULL;
PFNGLPIXELSTOREFPROC glPixelStoref = NULL;
PFNGLPIXELSTOREIPROC glPixelStorei = NULL;
PFNGLREADBUFFERPROC glReadBuffer = NULL;
PFNGLREADPIXELSPROC glReadPixels = NULL;
PFNGLGETBOOLEANVPROC glGetBooleanv = NULL;
PFNGLGETDOUBLEVPROC glGetDoublev = NULL;
PFNGLGETERRORPROC glGetError = NULL;
PFNGLGETFLOATVPROC glGetFloatv = NULL;
PFNGLGETINTEGERVPROC glGetIntegerv = NULL;
PFNGLGETSTRINGPROC glGetString = NULL;
PFNGLGETTEXIMAGEPROC glGetTexImage = NULL;
PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv = NULL;
PFNGLGETTEXLEVELPARAMETERFVPROC glGetTexLevelParameterfv = NULL;
PFNGLGETTEXLEVELPARAMETERIVPROC glGetTexLevelParameteriv = NULL;
PFNGLISENABLEDPROC glIsEnabled = NULL;
PFNGLDEPTHRANGEPROC glDepthRange = NULL;
PFNGLVIEWPORTPROC glViewport = NULL;
PFNGLNEWLISTPROC glNewList = NULL;
PFNGLENDLISTPROC glEndList = NULL;
PFNGLCALLLISTPROC glCallList = NULL;
PFNGLCALLLISTSPROC glCallLists = NULL;
PFNGLDELETELISTSPROC glDeleteLists = NULL;
PFNGLGENLISTSPROC glGenLists = NULL;
PFNGLLISTBASEPROC glListBase = NULL;
PFNGLBEGINPROC glBegin = NULL;
PFNGLBITMAPPROC glBitmap = NULL;
PFNGLCOLOR3BPROC glColor3b = NULL;
PFNGLCOLOR3BVPROC glColor3bv = NULL;
PFNGLCOLOR3DPROC glColor3d = NULL;
PFNGLCOLOR3DVPROC glColor3dv = NULL;
PFNGLCOLOR3FPROC glColor3f = NULL;
PFNGLCOLOR3FVPROC glColor3fv = NULL;
PFNGLCOLOR3IPROC glColor3i = NULL;
PFNGLCOLOR3IVPROC glColor3iv = NULL;
PFNGLCOLOR3SPROC glColor3s = NULL;
PFNGLCOLOR3SVPROC glColor3sv = NULL;
PFNGLCOLOR3UBPROC glColor3ub = NULL;
PFNGLCOLOR3UBVPROC glColor3ubv = NULL;
PFNGLCOLOR3UIPROC glColor3ui = NULL;
PFNGLCOLOR3UIVPROC glColor3uiv = NULL;
PFNGLCOLOR3USPROC glColor3us = NULL;
PFNGLCOLOR3USVPROC glColor3usv = NULL;
PFNGLCOLOR4BPROC glColor4b = NULL;
PFNGLCOLOR4BVPROC glColor4bv = NULL;
PFNGLCOLOR4DPROC glColor4d = NULL;
PFNGLCOLOR4DVPROC glColor4dv = NULL;
PFNGLCOLOR4FPROC glColor4f = NULL;
PFNGLCOLOR4FVPROC glColor4fv = NULL;
PFNGLCOLOR4IPROC glColor4i = NULL;
PFNGLCOLOR4IVPROC glColor4iv = NULL;
PFNGLCOLOR4SPROC glColor4s = NULL;
PFNGLCOLOR4SVPROC glColor4sv = NULL;
PFNGLCOLOR4UBPROC glColor4ub = NULL;
PFNGLCOLOR4UBVPROC glColor4ubv = NULL;
PFNGLCOLOR4UIPROC glColor4ui = NULL;
PFNGLCOLOR4UIVPROC glColor4uiv = NULL;
PFNGLCOLOR4USPROC glColor4us = NULL;
PFNGLCOLOR4USVPROC glColor4usv = NULL;
PFNGLEDGEFLAGPROC glEdgeFlag = NULL;
PFNGLEDGEFLAGVPROC glEdgeFlagv = NULL;
PFNGLENDPROC glEnd = NULL;
PFNGLINDEXDPROC glIndexd = NULL;
PFNGLINDEXDVPROC glIndexdv = NULL;
PFNGLINDEXFPROC glIndexf = NULL;
PFNGLINDEXFVPROC glIndexfv = NULL;
PFNGLINDEXIPROC glIndexi = NULL;
PFNGLINDEXIVPROC glIndexiv = NULL;
PFNGLINDEXSPROC glIndexs = NULL;
PFNGLINDEXSVPROC glIndexsv = NULL;
PFNGLNORMAL3BPROC glNormal3b = NULL;
PFNGLNORMAL3BVPROC glNormal3bv = NULL;
PFNGLNORMAL3DPROC glNormal3d = NULL;
PFNGLNORMAL3DVPROC glNormal3dv = NULL;
PFNGLNORMAL3FPROC glNormal3f = NULL;
PFNGLNORMAL3FVPROC glNormal3fv = NULL;
PFNGLNORMAL3IPROC glNormal3i = NULL;
PFNGLNORMAL3IVPROC glNormal3iv = NULL;
PFNGLNORMAL3SPROC glNormal3s = NULL;
PFNGLNORMAL3SVPROC glNormal3sv = NULL;
PFNGLRASTERPOS2DPROC glRasterPos2d = NULL;
PFNGLRASTERPOS2DVPROC glRasterPos2dv = NULL;
PFNGLRASTERPOS2FPROC glRasterPos2f = NULL;
PFNGLRASTERPOS2FVPROC glRasterPos2fv = NULL;
PFNGLRASTERPOS2IPROC glRasterPos2i = NULL;
PFNGLRASTERPOS2IVPROC glRasterPos2iv = NULL;
PFNGLRASTERPOS2SPROC glRasterPos2s = NULL;
PFNGLRASTERPOS2SVPROC glRasterPos2sv = NULL;
PFNGLRASTERPOS3DPROC glRasterPos3d = NULL;
PFNGLRASTERPOS3DVPROC glRasterPos3dv = NULL;
PFNGLRASTERPOS3FPROC glRasterPos3f = NULL;
PFNGLRASTERPOS3FVPROC glRasterPos3fv = NULL;
PFNGLRASTERPOS3IPROC glRasterPos3i = NULL;
PFNGLRASTERPOS3IVPROC glRasterPos3iv = NULL;
PFNGLRASTERPOS3SPROC glRasterPos3s = NULL;
PFNGLRASTERPOS3SVPROC glRasterPos3sv = NULL;
PFNGLRASTERPOS4DPROC glRasterPos4d = NULL;
PFNGLRASTERPOS4DVPROC glRasterPos4dv = NULL;
PFNGLRASTERPOS4FPROC glRasterPos4f = NULL;
PFNGLRASTERPOS4FVPROC glRasterPos4fv = NULL;
PFNGLRASTERPOS4IPROC glRasterPos4i = NULL;
PFNGLRASTERPOS4IVPROC glRasterPos4iv = NULL;
PFNGLRASTERPOS4SPROC glRasterPos4s = NULL;
PFNGLRASTERPOS4SVPROC glRasterPos4sv = NULL;
PFNGLRECTDPROC glRectd = NULL;
PFNGLRECTDVPROC glRectdv = NULL;
PFNGLRECTFPROC glRectf = NULL;
PFNGLRECTFVPROC glRectfv = NULL;
PFNGLRECTIPROC glRecti = NULL;
PFNGLRECTIVPROC glRectiv = NULL;
PFNGLRECTSPROC glRects = NULL;
PFNGLRECTSVPROC glRectsv = NULL;
PFNGLTEXCOORD1DPROC glTexCoord1d = NULL;
PFNGLTEXCOORD1DVPROC glTexCoord1dv = NULL;
PFNGLTEXCOORD1FPROC glTexCoord1f = NULL;
PFNGLTEXCOORD1FVPROC glTexCoord1fv = NULL;
PFNGLTEXCOORD1IPROC glTexCoord1i = NULL;
PFNGLTEXCOORD1IVPROC glTexCoord1iv = NULL;
PFNGLTEXCOORD1SPROC glTexCoord1s = NULL;
PFNGLTEXCOORD1SVPROC glTexCoord1sv = NULL;
PFNGLTEXCOORD2DPROC glTexCoord2d = NULL;
PFNGLTEXCOORD2DVPROC glTexCoord2dv = NULL;
PFNGLTEXCOORD2FPROC glTexCoord2f = NULL;
PFNGLTEXCOORD2FVPROC glTexCoord2fv = NULL;
PFNGLTEXCOORD2IPROC glTexCoord2i = NULL;
PFNGLTEXCOORD2IVPROC glTexCoord2iv = NULL;
PFNGLTEXCOORD2SPROC glTexCoord2s = NULL;
PFNGLTEXCOORD2SVPROC glTexCoord2sv = NULL;
PFNGLTEXCOORD3DPROC glTexCoord3d = NULL;
PFNGLTEXCOORD3DVPROC glTexCoord3dv = NULL;
PFNGLTEXCOORD3FPROC glTexCoord3f = NULL;
PFNGLTEXCOORD3FVPROC glTexCoord3fv = NULL;
PFNGLTEXCOORD3IPROC glTexCoord3i = NULL;
PFNGLTEXCOORD3IVPROC glTexCoord3iv = NULL;
PFNGLTEXCOORD3SPROC glTexCoord3s = NULL;
PFNGLTEXCOORD3SVPROC glTexCoord3sv = NULL;
PFNGLTEXCOORD4DPROC glTexCoord4d = NULL;
PFNGLTEXCOORD4DVPROC glTexCoord4dv = NULL;
PFNGLTEXCOORD4FPROC glTexCoord4f = NULL;
PFNGLTEXCOORD4FVPROC glTexCoord4fv = NULL;
PFNGLTEXCOORD4IPROC glTexCoord4i = NULL;
PFNGLTEXCOORD4IVPROC glTexCoord4iv = NULL;
PFNGLTEXCOORD4SPROC glTexCoord4s = NULL;
PFNGLTEXCOORD4SVPROC glTexCoord4sv = NULL;
PFNGLVERTEX2DPROC glVertex2d = NULL;
PFNGLVERTEX2DVPROC glVertex2dv = NULL;
PFNGLVERTEX2FPROC glVertex2f = NULL;
PFNGLVERTEX2FVPROC glVertex2fv = NULL;
PFNGLVERTEX2IPROC glVertex2i = NULL;
PFNGLVERTEX2IVPROC glVertex2iv = NULL;
PFNGLVERTEX2SPROC glVertex2s = NULL;
PFNGLVERTEX2SVPROC glVertex2sv = NULL;
PFNGLVERTEX3DPROC glVertex3d = NULL;
PFNGLVERTEX3DVPROC glVertex3dv = NULL;
PFNGLVERTEX3FPROC glVertex3f = NULL;
PFNGLVERTEX3FVPROC glVertex3fv = NULL;
PFNGLVERTEX3IPROC glVertex3i = NULL;
PFNGLVERTEX3IVPROC glVertex3iv = NULL;
PFNGLVERTEX3SPROC glVertex3s = NULL;
PFNGLVERTEX3SVPROC glVertex3sv = NULL;
PFNGLVERTEX4DPROC glVertex4d = NULL;
PFNGLVERTEX4DVPROC glVertex4dv = NULL;
PFNGLVERTEX4FPROC glVertex4f = NULL;
PFNGLVERTEX4FVPROC glVertex4fv = NULL;
PFNGLVERTEX4IPROC glVertex4i = NULL;
PFNGLVERTEX4IVPROC glVertex4iv = NULL;
PFNGLVERTEX4SPROC glVertex4s = NULL;
PFNGLVERTEX4SVPROC glVertex4sv = NULL;
PFNGLCLIPPLANEPROC glClipPlane = NULL;
PFNGLCOLORMATERIALPROC glColorMaterial = NULL;
PFNGLFOGFPROC glFogf = NULL;
PFNGLFOGFVPROC glFogfv = NULL;
PFNGLFOGIPROC glFogi = NULL;
PFNGLFOGIVPROC glFogiv = NULL;
PFNGLLIGHTFPROC glLightf = NULL;
PFNGLLIGHTFVPROC glLightfv = NULL;
PFNGLLIGHTIPROC glLighti = NULL;
PFNGLLIGHTIVPROC glLightiv = NULL;
PFNGLLIGHTMODELFPROC glLightModelf = NULL;
PFNGLLIGHTMODELFVPROC glLightModelfv = NULL;
PFNGLLIGHTMODELIPROC glLightModeli = NULL;
PFNGLLIGHTMODELIVPROC glLightModeliv = NULL;
PFNGLLINESTIPPLEPROC glLineStipple = NULL;
PFNGLMATERIALFPROC glMaterialf = NULL;
PFNGLMATERIALFVPROC glMaterialfv = NULL;
PFNGLMATERIALIPROC glMateriali = NULL;
PFNGLMATERIALIVPROC glMaterialiv = NULL;
PFNGLPOLYGONSTIPPLEPROC glPolygonStipple = NULL;
PFNGLSHADEMODELPROC glShadeModel = NULL;
PFNGLTEXENVFPROC glTexEnvf = NULL;
PFNGLTEXENVFVPROC glTexEnvfv = NULL;
PFNGLTEXENVIPROC glTexEnvi = NULL;
PFNGLTEXENVIVPROC glTexEnviv = NULL;
PFNGLTEXGENDPROC glTexGend = NULL;
PFNGLTEXGENDVPROC glTexGendv = NULL;
PFNGLTEXGENFPROC glTexGenf = NULL;
PFNGLTEXGENFVPROC glTexGenfv = NULL;
PFNGLTEXGENIPROC glTexGeni = NULL;
PFNGLTEXGENIVPROC glTexGeniv = NULL;
PFNGLFEEDBACKBUFFERPROC glFeedbackBuffer = NULL;
PFNGLSELECTBUFFERPROC glSelectBuffer = NULL;
PFNGLRENDERMODEPROC glRenderMode = NULL;
PFNGLINITNAMESPROC glInitNames = NULL;
PFNGLLOADNAMEPROC glLoadName = NULL;
PFNGLPASSTHROUGHPROC glPassThrough = NULL;
PFNGLPOPNAMEPROC glPopName = NULL;
PFNGLPUSHNAMEPROC glPushName = NULL;
PFNGLCLEARACCUMPROC glClearAccum = NULL;
PFNGLCLEARINDEXPROC glClearIndex = NULL;
PFNGLINDEXMASKPROC glIndexMask = NULL;
PFNGLACCUMPROC glAccum = NULL;
PFNGLPOPATTRIBPROC glPopAttrib = NULL;
PFNGLPUSHATTRIBPROC glPushAttrib = NULL;
PFNGLMAP1DPROC glMap1d = NULL;
PFNGLMAP1FPROC glMap1f = NULL;
PFNGLMAP2DPROC glMap2d = NULL;
PFNGLMAP2FPROC glMap2f = NULL;
PFNGLMAPGRID1DPROC glMapGrid1d = NULL;
PFNGLMAPGRID1FPROC glMapGrid1f = NULL;
PFNGLMAPGRID2DPROC glMapGrid2d = NULL;
PFNGLMAPGRID2FPROC glMapGrid2f = NULL;
PFNGLEVALCOORD1DPROC glEvalCoord1d = NULL;
PFNGLEVALCOORD1DVPROC glEvalCoord1dv = NULL;
PFNGLEVALCOORD1FPROC glEvalCoord1f = NULL;
PFNGLEVALCOORD1FVPROC glEvalCoord1fv = NULL;
PFNGLEVALCOORD2DPROC glEvalCoord2d = NULL;
PFNGLEVALCOORD2DVPROC glEvalCoord2dv = NULL;
PFNGLEVALCOORD2FPROC glEvalCoord2f = NULL;
PFNGLEVALCOORD2FVPROC glEvalCoord2fv = NULL;
PFNGLEVALMESH1PROC glEvalMesh1 = NULL;
PFNGLEVALPOINT1PROC glEvalPoint1 = NULL;
PFNGLEVALMESH2PROC glEvalMesh2 = NULL;
PFNGLEVALPOINT2PROC glEvalPoint2 = NULL;
PFNGLALPHAFUNCPROC glAlphaFunc = NULL;
PFNGLPIXELZOOMPROC glPixelZoom = NULL;
PFNGLPIXELTRANSFERFPROC glPixelTransferf = NULL;
PFNGLPIXELTRANSFERIPROC glPixelTransferi = NULL;
PFNGLPIXELMAPFVPROC glPixelMapfv = NULL;
PFNGLPIXELMAPUIVPROC glPixelMapuiv = NULL;
PFNGLPIXELMAPUSVPROC glPixelMapusv = NULL;
PFNGLCOPYPIXELSPROC glCopyPixels = NULL;
PFNGLDRAWPIXELSPROC glDrawPixels = NULL;
PFNGLGETCLIPPLANEPROC glGetClipPlane = NULL;
PFNGLGETLIGHTFVPROC glGetLightfv = NULL;
PFNGLGETLIGHTIVPROC glGetLightiv = NULL;
PFNGLGETMAPDVPROC glGetMapdv = NULL;
PFNGLGETMAPFVPROC glGetMapfv = NULL;
PFNGLGETMAPIVPROC glGetMapiv = NULL;
PFNGLGETMATERIALFVPROC glGetMaterialfv = NULL;
PFNGLGETMATERIALIVPROC glGetMaterialiv = NULL;
PFNGLGETPIXELMAPFVPROC glGetPixelMapfv = NULL;
PFNGLGETPIXELMAPUIVPROC glGetPixelMapuiv = NULL;
PFNGLGETPIXELMAPUSVPROC glGetPixelMapusv = NULL;
PFNGLGETPOLYGONSTIPPLEPROC glGetPolygonStipple = NULL;
PFNGLGETTEXENVFVPROC glGetTexEnvfv = NULL;
PFNGLGETTEXENVIVPROC glGetTexEnviv = NULL;
PFNGLGETTEXGENDVPROC glGetTexGendv = NULL;
PFNGLGETTEXGENFVPROC glGetTexGenfv = NULL;
PFNGLGETTEXGENIVPROC glGetTexGeniv = NULL;
PFNGLISLISTPROC glIsList = NULL;
PFNGLFRUSTUMPROC glFrustum = NULL;
PFNGLLOADIDENTITYPROC glLoadIdentity = NULL;
PFNGLLOADMATRIXFPROC glLoadMatrixf = NULL;
PFNGLLOADMATRIXDPROC glLoadMatrixd = NULL;
PFNGLMATRIXMODEPROC glMatrixMode = NULL;
PFNGLMULTMATRIXFPROC glMultMatrixf = NULL;
PFNGLMULTMATRIXDPROC glMultMatrixd = NULL;
PFNGLORTHOPROC glOrtho = NULL;
PFNGLPOPMATRIXPROC glPopMatrix = NULL;
PFNGLPUSHMATRIXPROC glPushMatrix = NULL;
PFNGLROTATEDPROC glRotated = NULL;
PFNGLROTATEFPROC glRotatef = NULL;
PFNGLSCALEDPROC glScaled = NULL;
PFNGLSCALEFPROC glScalef = NULL;
PFNGLTRANSLATEDPROC glTranslated = NULL;
PFNGLTRANSLATEFPROC glTranslatef = NULL;