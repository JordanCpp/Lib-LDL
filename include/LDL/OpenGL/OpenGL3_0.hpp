#ifndef LDL_OpenGL_OpenGL3_0_hpp
#define LDL_OpenGL_OpenGL3_0_hpp

#include <LDL/OpenGL/OpenGL2_1.hpp>

typedef void (OPENGL_API_CALL PFNGLCOLORMASKIPROC)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void (OPENGL_API_CALL PFNGLGETBOOLEANI_VPROC)(GLenum target, GLuint index, GLboolean* data);
typedef void (OPENGL_API_CALL PFNGLGETINTEGERI_VPROC)(GLenum target, GLuint index, GLint* data);
typedef void (OPENGL_API_CALL PFNGLENABLEIPROC)(GLenum target, GLuint index);
typedef void (OPENGL_API_CALL PFNGLDISABLEIPROC)(GLenum target, GLuint index);
typedef GLboolean(OPENGL_API_CALL PFNGLISENABLEDIPROC)(GLenum target, GLuint index);
typedef void (OPENGL_API_CALL PFNGLBEGINTRANSFORMFEEDBACKPROC)(GLenum primitiveMode);
typedef void (OPENGL_API_CALL PFNGLENDTRANSFORMFEEDBACKPROC)(void);
typedef void (OPENGL_API_CALL PFNGLBINDBUFFERRANGEPROC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (OPENGL_API_CALL PFNGLBINDBUFFERBASEPROC)(GLenum target, GLuint index, GLuint buffer);
typedef void (OPENGL_API_CALL PFNGLTRANSFORMFEEDBACKVARYINGSPROC)(GLuint program, GLsizei count, const GLchar* const* varyings, GLenum bufferMode);
typedef void (OPENGL_API_CALL PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name);
typedef void (OPENGL_API_CALL PFNGLCLAMPCOLORPROC)(GLenum target, GLenum clamp);
typedef void (OPENGL_API_CALL PFNGLBEGINCONDITIONALRENDERPROC)(GLuint id, GLenum mode);
typedef void (OPENGL_API_CALL PFNGLENDCONDITIONALRENDERPROC)(void);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBIPOINTERPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);
typedef void (OPENGL_API_CALL PFNGLGETVERTEXATTRIBIIVPROC)(GLuint index, GLenum pname, GLint* params);
typedef void (OPENGL_API_CALL PFNGLGETVERTEXATTRIBIUIVPROC)(GLuint index, GLenum pname, GLuint* params);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI1IPROC)(GLuint index, GLint x);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI2IPROC)(GLuint index, GLint x, GLint y);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI3IPROC)(GLuint index, GLint x, GLint y, GLint z);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI4IPROC)(GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI1UIPROC)(GLuint index, GLuint x);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI2UIPROC)(GLuint index, GLuint x, GLuint y);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI3UIPROC)(GLuint index, GLuint x, GLuint y, GLuint z);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI4UIPROC)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI1IVPROC)(GLuint index, const GLint* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI2IVPROC)(GLuint index, const GLint* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI3IVPROC)(GLuint index, const GLint* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI4IVPROC)(GLuint index, const GLint* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI1UIVPROC)(GLuint index, const GLuint* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI2UIVPROC)(GLuint index, const GLuint* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI3UIVPROC)(GLuint index, const GLuint* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI4UIVPROC)(GLuint index, const GLuint* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI4BVPROC)(GLuint index, const GLbyte* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI4SVPROC)(GLuint index, const GLshort* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI4UBVPROC)(GLuint index, const GLubyte* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBI4USVPROC)(GLuint index, const GLushort* v);
typedef void (OPENGL_API_CALL PFNGLGETUNIFORMUIVPROC)(GLuint program, GLint location, GLuint* params);
typedef void (OPENGL_API_CALL PFNGLBINDFRAGDATALOCATIONPROC)(GLuint program, GLuint color, const GLchar* name);
typedef GLint(OPENGL_API_CALL PFNGLGETFRAGDATALOCATIONPROC)(GLuint program, const GLchar* name);
typedef void (OPENGL_API_CALL PFNGLUNIFORM1UIPROC)(GLint location, GLuint v0);
typedef void (OPENGL_API_CALL PFNGLUNIFORM2UIPROC)(GLint location, GLuint v0, GLuint v1);
typedef void (OPENGL_API_CALL PFNGLUNIFORM3UIPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (OPENGL_API_CALL PFNGLUNIFORM4UIPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (OPENGL_API_CALL PFNGLUNIFORM1UIVPROC)(GLint location, GLsizei count, const GLuint* value);
typedef void (OPENGL_API_CALL PFNGLUNIFORM2UIVPROC)(GLint location, GLsizei count, const GLuint* value);
typedef void (OPENGL_API_CALL PFNGLUNIFORM3UIVPROC)(GLint location, GLsizei count, const GLuint* value);
typedef void (OPENGL_API_CALL PFNGLUNIFORM4UIVPROC)(GLint location, GLsizei count, const GLuint* value);
typedef void (OPENGL_API_CALL PFNGLTEXPARAMETERIIVPROC)(GLenum target, GLenum pname, const GLint* params);
typedef void (OPENGL_API_CALL PFNGLTEXPARAMETERIUIVPROC)(GLenum target, GLenum pname, const GLuint* params);
typedef void (OPENGL_API_CALL PFNGLGETTEXPARAMETERIIVPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (OPENGL_API_CALL PFNGLGETTEXPARAMETERIUIVPROC)(GLenum target, GLenum pname, GLuint* params);
typedef void (OPENGL_API_CALL PFNGLCLEARBUFFERIVPROC)(GLenum buffer, GLint drawbuffer, const GLint* value);
typedef void (OPENGL_API_CALL PFNGLCLEARBUFFERUIVPROC)(GLenum buffer, GLint drawbuffer, const GLuint* value);
typedef void (OPENGL_API_CALL PFNGLCLEARBUFFERFVPROC)(GLenum buffer, GLint drawbuffer, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLCLEARBUFFERFIPROC)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte* (OPENGL_API_CALL PFNGLGETSTRINGIPROC)(GLenum name, GLuint index);
typedef GLboolean(OPENGL_API_CALL PFNGLISRENDERBUFFERPROC)(GLuint renderbuffer);
typedef void (OPENGL_API_CALL PFNGLBINDRENDERBUFFERPROC)(GLenum target, GLuint renderbuffer);
typedef void (OPENGL_API_CALL PFNGLDELETERENDERBUFFERSPROC)(GLsizei n, const GLuint* renderbuffers);
typedef void (OPENGL_API_CALL PFNGLGENRENDERBUFFERSPROC)(GLsizei n, GLuint* renderbuffers);
typedef void (OPENGL_API_CALL PFNGLRENDERBUFFERSTORAGEPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (OPENGL_API_CALL PFNGLGETRENDERBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint* params);
typedef GLboolean(OPENGL_API_CALL PFNGLISFRAMEBUFFERPROC)(GLuint framebuffer);
typedef void (OPENGL_API_CALL PFNGLBINDFRAMEBUFFERPROC)(GLenum target, GLuint framebuffer);
typedef void (OPENGL_API_CALL PFNGLDELETEFRAMEBUFFERSPROC)(GLsizei n, const GLuint* framebuffers);
typedef void (OPENGL_API_CALL PFNGLGENFRAMEBUFFERSPROC)(GLsizei n, GLuint* framebuffers);
typedef GLenum(OPENGL_API_CALL PFNGLCHECKFRAMEBUFFERSTATUSPROC)(GLenum target);
typedef void (OPENGL_API_CALL PFNGLFRAMEBUFFERTEXTURE1DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (OPENGL_API_CALL PFNGLFRAMEBUFFERTEXTURE2DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (OPENGL_API_CALL PFNGLFRAMEBUFFERTEXTURE3DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (OPENGL_API_CALL PFNGLFRAMEBUFFERRENDERBUFFERPROC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (OPENGL_API_CALL PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef void (OPENGL_API_CALL PFNGLGENERATEMIPMAPPROC)(GLenum target);
typedef void (OPENGL_API_CALL PFNGLBLITFRAMEBUFFERPROC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (OPENGL_API_CALL PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (OPENGL_API_CALL PFNGLFRAMEBUFFERTEXTURELAYERPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void* (OPENGL_API_CALL PFNGLMAPBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (OPENGL_API_CALL PFNGLFLUSHMAPPEDBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (OPENGL_API_CALL PFNGLBINDVERTEXARRAYPROC)(GLuint array);
typedef void (OPENGL_API_CALL PFNGLDELETEVERTEXARRAYSPROC)(GLsizei n, const GLuint* arrays);
typedef void (OPENGL_API_CALL PFNGLGENVERTEXARRAYSPROC)(GLsizei n, GLuint* arrays);
typedef GLboolean(OPENGL_API_CALL PFNGLISVERTEXARRAYPROC)(GLuint array);

OPENGL_API_ENTRY PFNGLCOLORMASKIPROC* glColorMaski;
OPENGL_API_ENTRY PFNGLGETBOOLEANI_VPROC* glGetBooleani_v;
OPENGL_API_ENTRY PFNGLGETINTEGERI_VPROC* glGetIntegeri_v;
OPENGL_API_ENTRY PFNGLENABLEIPROC* glEnablei;
OPENGL_API_ENTRY PFNGLDISABLEIPROC* glDisablei;
OPENGL_API_ENTRY PFNGLISENABLEDIPROC* glIsEnabledi;
OPENGL_API_ENTRY PFNGLBEGINTRANSFORMFEEDBACKPROC* glBeginTransformFeedback;
OPENGL_API_ENTRY PFNGLENDTRANSFORMFEEDBACKPROC* glEndTransformFeedback;
OPENGL_API_ENTRY PFNGLBINDBUFFERRANGEPROC* glBindBufferRange;
OPENGL_API_ENTRY PFNGLBINDBUFFERBASEPROC* glBindBufferBase;
OPENGL_API_ENTRY PFNGLTRANSFORMFEEDBACKVARYINGSPROC* glTransformFeedbackVaryings;
OPENGL_API_ENTRY PFNGLGETTRANSFORMFEEDBACKVARYINGPROC* glGetTransformFeedbackVarying;
OPENGL_API_ENTRY PFNGLCLAMPCOLORPROC* glClampColor;
OPENGL_API_ENTRY PFNGLBEGINCONDITIONALRENDERPROC* glBeginConditionalRender;
OPENGL_API_ENTRY PFNGLENDCONDITIONALRENDERPROC* glEndConditionalRender;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBIPOINTERPROC* glVertexAttribIPointer;
OPENGL_API_ENTRY PFNGLGETVERTEXATTRIBIIVPROC* glGetVertexAttribIiv;
OPENGL_API_ENTRY PFNGLGETVERTEXATTRIBIUIVPROC* glGetVertexAttribIuiv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI1IPROC* glVertexAttribI1i;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI2IPROC* glVertexAttribI2i;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI3IPROC* glVertexAttribI3i;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI4IPROC* glVertexAttribI4i;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI1UIPROC* glVertexAttribI1ui;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI2UIPROC* glVertexAttribI2ui;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI3UIPROC* glVertexAttribI3ui;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI4UIPROC* glVertexAttribI4ui;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI1IVPROC* glVertexAttribI1iv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI2IVPROC* glVertexAttribI2iv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI3IVPROC* glVertexAttribI3iv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI4IVPROC* glVertexAttribI4iv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI1UIVPROC* glVertexAttribI1uiv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI2UIVPROC* glVertexAttribI2uiv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI3UIVPROC* glVertexAttribI3uiv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI4UIVPROC* glVertexAttribI4uiv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI4BVPROC* glVertexAttribI4bv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI4SVPROC* glVertexAttribI4sv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI4UBVPROC* glVertexAttribI4ubv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBI4USVPROC* glVertexAttribI4usv;
OPENGL_API_ENTRY PFNGLGETUNIFORMUIVPROC* glGetUniformuiv;
OPENGL_API_ENTRY PFNGLBINDFRAGDATALOCATIONPROC* glBindFragDataLocation;
OPENGL_API_ENTRY PFNGLGETFRAGDATALOCATIONPROC* glGetFragDataLocation;
OPENGL_API_ENTRY PFNGLUNIFORM1UIPROC* glUniform1ui;
OPENGL_API_ENTRY PFNGLUNIFORM2UIPROC* glUniform2ui;
OPENGL_API_ENTRY PFNGLUNIFORM3UIPROC* glUniform3ui;
OPENGL_API_ENTRY PFNGLUNIFORM4UIPROC* glUniform4ui;
OPENGL_API_ENTRY PFNGLUNIFORM1UIVPROC* glUniform1uiv;
OPENGL_API_ENTRY PFNGLUNIFORM2UIVPROC* glUniform2uiv;
OPENGL_API_ENTRY PFNGLUNIFORM3UIVPROC* glUniform3uiv;
OPENGL_API_ENTRY PFNGLUNIFORM4UIVPROC* glUniform4uiv;
OPENGL_API_ENTRY PFNGLTEXPARAMETERIIVPROC* glTexParameterIiv;
OPENGL_API_ENTRY PFNGLTEXPARAMETERIUIVPROC* glTexParameterIuiv;
OPENGL_API_ENTRY PFNGLGETTEXPARAMETERIIVPROC* glGetTexParameterIiv;
OPENGL_API_ENTRY PFNGLGETTEXPARAMETERIUIVPROC* glGetTexParameterIuiv;
OPENGL_API_ENTRY PFNGLCLEARBUFFERIVPROC* glClearBufferiv;
OPENGL_API_ENTRY PFNGLCLEARBUFFERUIVPROC* glClearBufferuiv;
OPENGL_API_ENTRY PFNGLCLEARBUFFERFVPROC* glClearBufferfv;
OPENGL_API_ENTRY PFNGLCLEARBUFFERFIPROC* glClearBufferfi;
OPENGL_API_ENTRY PFNGLGETSTRINGIPROC* glGetStringi;
OPENGL_API_ENTRY PFNGLISRENDERBUFFERPROC* glIsRenderbuffer;
OPENGL_API_ENTRY PFNGLBINDRENDERBUFFERPROC* glBindRenderbuffer;
OPENGL_API_ENTRY PFNGLDELETERENDERBUFFERSPROC* glDeleteRenderbuffers;
OPENGL_API_ENTRY PFNGLGENRENDERBUFFERSPROC* glGenRenderbuffers;
OPENGL_API_ENTRY PFNGLRENDERBUFFERSTORAGEPROC* glRenderbufferStorage;
OPENGL_API_ENTRY PFNGLGETRENDERBUFFERPARAMETERIVPROC* glGetRenderbufferParameteriv;
OPENGL_API_ENTRY PFNGLISFRAMEBUFFERPROC* glIsFramebuffer;
OPENGL_API_ENTRY PFNGLBINDFRAMEBUFFERPROC* glBindFramebuffer;
OPENGL_API_ENTRY PFNGLDELETEFRAMEBUFFERSPROC* glDeleteFramebuffers;
OPENGL_API_ENTRY PFNGLGENFRAMEBUFFERSPROC* glGenFramebuffers;
OPENGL_API_ENTRY PFNGLCHECKFRAMEBUFFERSTATUSPROC* glCheckFramebufferStatus;
OPENGL_API_ENTRY PFNGLFRAMEBUFFERTEXTURE1DPROC* glFramebufferTexture1D;
OPENGL_API_ENTRY PFNGLFRAMEBUFFERTEXTURE2DPROC* glFramebufferTexture2D;
OPENGL_API_ENTRY PFNGLFRAMEBUFFERTEXTURE3DPROC* glFramebufferTexture3D;
OPENGL_API_ENTRY PFNGLFRAMEBUFFERRENDERBUFFERPROC* glFramebufferRenderbuffer;
OPENGL_API_ENTRY PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC* glGetFramebufferAttachmentParameteriv;
OPENGL_API_ENTRY PFNGLGENERATEMIPMAPPROC* glGenerateMipmap;
OPENGL_API_ENTRY PFNGLBLITFRAMEBUFFERPROC* glBlitFramebuffer;
OPENGL_API_ENTRY PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC* glRenderbufferStorageMultisample;
OPENGL_API_ENTRY PFNGLFRAMEBUFFERTEXTURELAYERPROC* glFramebufferTextureLayer;
OPENGL_API_ENTRY PFNGLMAPBUFFERRANGEPROC* glMapBufferRange;
OPENGL_API_ENTRY PFNGLFLUSHMAPPEDBUFFERRANGEPROC* glFlushMappedBufferRange;
OPENGL_API_ENTRY PFNGLBINDVERTEXARRAYPROC* glBindVertexArray;
OPENGL_API_ENTRY PFNGLDELETEVERTEXARRAYSPROC* glDeleteVertexArrays;
OPENGL_API_ENTRY PFNGLGENVERTEXARRAYSPROC* glGenVertexArrays;
OPENGL_API_ENTRY PFNGLISVERTEXARRAYPROC* glIsVertexArray;

#endif     