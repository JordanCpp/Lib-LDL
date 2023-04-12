#ifndef LDL_OpenGL_OpenGL1_4_hpp
#define LDL_OpenGL_OpenGL1_4_hpp

#include <LDL/OpenGL/OpenGL1_3.hpp>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (OPENGL_API_CALL PFNGLBLENDFUNCSEPARATEPROC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (OPENGL_API_CALL PFNGLMULTIDRAWARRAYSPROC)(GLenum mode, const GLint* first, const GLsizei* count, GLsizei drawcount);
typedef void (OPENGL_API_CALL PFNGLMULTIDRAWELEMENTSPROC)(GLenum mode, const GLsizei* count, GLenum type, const void* const* indices, GLsizei drawcount);
typedef void (OPENGL_API_CALL PFNGLPOINTPARAMETERFPROC)(GLenum pname, GLfloat param);
typedef void (OPENGL_API_CALL PFNGLPOINTPARAMETERFVPROC)(GLenum pname, const GLfloat* params);
typedef void (OPENGL_API_CALL PFNGLPOINTPARAMETERIPROC)(GLenum pname, GLint param);
typedef void (OPENGL_API_CALL PFNGLPOINTPARAMETERIVPROC)(GLenum pname, const GLint* params);
typedef void (OPENGL_API_CALL PFNGLFOGCOORDFPROC)(GLfloat coord);
typedef void (OPENGL_API_CALL PFNGLFOGCOORDFVPROC)(const GLfloat* coord);
typedef void (OPENGL_API_CALL PFNGLFOGCOORDDPROC)(GLdouble coord);
typedef void (OPENGL_API_CALL PFNGLFOGCOORDDVPROC)(const GLdouble* coord);
typedef void (OPENGL_API_CALL PFNGLFOGCOORDPOINTERPROC)(GLenum type, GLsizei stride, const void* pointer);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3BPROC)(GLbyte red, GLbyte green, GLbyte blue);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3BVPROC)(const GLbyte* v);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3DPROC)(GLdouble red, GLdouble green, GLdouble blue);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3DVPROC)(const GLdouble* v);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3FPROC)(GLfloat red, GLfloat green, GLfloat blue);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3FVPROC)(const GLfloat* v);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3IPROC)(GLint red, GLint green, GLint blue);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3IVPROC)(const GLint* v);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3SPROC)(GLshort red, GLshort green, GLshort blue);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3SVPROC)(const GLshort* v);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3UBPROC)(GLubyte red, GLubyte green, GLubyte blue);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3UBVPROC)(const GLubyte* v);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3UIPROC)(GLuint red, GLuint green, GLuint blue);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3UIVPROC)(const GLuint* v);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3USPROC)(GLushort red, GLushort green, GLushort blue);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLOR3USVPROC)(const GLushort* v);
typedef void (OPENGL_API_CALL PFNGLSECONDARYCOLORPOINTERPROC)(GLint size, GLenum type, GLsizei stride, const void* pointer);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS2DPROC)(GLdouble x, GLdouble y);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS2DVPROC)(const GLdouble* v);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS2FPROC)(GLfloat x, GLfloat y);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS2FVPROC)(const GLfloat* v);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS2IPROC)(GLint x, GLint y);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS2IVPROC)(const GLint* v);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS2SPROC)(GLshort x, GLshort y);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS2SVPROC)(const GLshort* v);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS3DPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS3DVPROC)(const GLdouble* v);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS3FPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS3FVPROC)(const GLfloat* v);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS3IPROC)(GLint x, GLint y, GLint z);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS3IVPROC)(const GLint* v);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS3SPROC)(GLshort x, GLshort y, GLshort z);
typedef void (OPENGL_API_CALL PFNGLWINDOWPOS3SVPROC)(const GLshort* v);
typedef void (OPENGL_API_CALL PFNGLBLENDCOLORPROC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (OPENGL_API_CALL PFNGLBLENDEQUATIONPROC)(GLenum mode);

OPENGL_API_ENTRY PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;
OPENGL_API_ENTRY PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays;
OPENGL_API_ENTRY PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements;
OPENGL_API_ENTRY PFNGLPOINTPARAMETERFPROC glPointParameterf;
OPENGL_API_ENTRY PFNGLPOINTPARAMETERFVPROC glPointParameterfv;
OPENGL_API_ENTRY PFNGLPOINTPARAMETERIPROC glPointParameteri;
OPENGL_API_ENTRY PFNGLPOINTPARAMETERIVPROC glPointParameteriv;
OPENGL_API_ENTRY PFNGLFOGCOORDFPROC glFogCoordf;
OPENGL_API_ENTRY PFNGLFOGCOORDFVPROC glFogCoordfv;
OPENGL_API_ENTRY PFNGLFOGCOORDDPROC glFogCoordd;
OPENGL_API_ENTRY PFNGLFOGCOORDDVPROC glFogCoorddv;
OPENGL_API_ENTRY PFNGLFOGCOORDPOINTERPROC glFogCoordPointer;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3BPROC glSecondaryColor3b;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3BVPROC glSecondaryColor3bv;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3DPROC glSecondaryColor3d;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3DVPROC glSecondaryColor3dv;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3FPROC glSecondaryColor3f;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3FVPROC glSecondaryColor3fv;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3IPROC glSecondaryColor3i;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3IVPROC glSecondaryColor3iv;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3SPROC glSecondaryColor3s;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3SVPROC glSecondaryColor3sv;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3UBPROC glSecondaryColor3ub;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3UBVPROC glSecondaryColor3ubv;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3UIPROC glSecondaryColor3ui;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3UIVPROC glSecondaryColor3uiv;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3USPROC glSecondaryColor3us;
OPENGL_API_ENTRY PFNGLSECONDARYCOLOR3USVPROC glSecondaryColor3usv;
OPENGL_API_ENTRY PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer;
OPENGL_API_ENTRY PFNGLWINDOWPOS2DPROC glWindowPos2d;
OPENGL_API_ENTRY PFNGLWINDOWPOS2DVPROC glWindowPos2dv;
OPENGL_API_ENTRY PFNGLWINDOWPOS2FPROC glWindowPos2f;
OPENGL_API_ENTRY PFNGLWINDOWPOS2FVPROC glWindowPos2fv;
OPENGL_API_ENTRY PFNGLWINDOWPOS2IPROC glWindowPos2i;
OPENGL_API_ENTRY PFNGLWINDOWPOS2IVPROC glWindowPos2iv;
OPENGL_API_ENTRY PFNGLWINDOWPOS2SPROC glWindowPos2s;
OPENGL_API_ENTRY PFNGLWINDOWPOS2SVPROC glWindowPos2sv;
OPENGL_API_ENTRY PFNGLWINDOWPOS3DPROC glWindowPos3d;
OPENGL_API_ENTRY PFNGLWINDOWPOS3DVPROC glWindowPos3dv;
OPENGL_API_ENTRY PFNGLWINDOWPOS3FPROC glWindowPos3f;
OPENGL_API_ENTRY PFNGLWINDOWPOS3FVPROC glWindowPos3fv;
OPENGL_API_ENTRY PFNGLWINDOWPOS3IPROC glWindowPos3i;
OPENGL_API_ENTRY PFNGLWINDOWPOS3IVPROC glWindowPos3iv;
OPENGL_API_ENTRY PFNGLWINDOWPOS3SPROC glWindowPos3s;
OPENGL_API_ENTRY PFNGLWINDOWPOS3SVPROC glWindowPos3sv;
OPENGL_API_ENTRY PFNGLBLENDCOLORPROC glBlendColor;
OPENGL_API_ENTRY PFNGLBLENDEQUATIONPROC glBlendEquation;

#ifdef __cplusplus
}
#endif

#endif     