#ifndef LDL_OpenGL_OpenGL4_1_hpp
#define LDL_OpenGL_OpenGL4_1_hpp

#include <LDL/OpenGL/OpenGL4_0.hpp>

typedef void (OPENGL_API_CALL PFNGLRELEASESHADERCOMPILERPROC)(void);
typedef void (OPENGL_API_CALL PFNGLSHADERBINARYPROC)(GLsizei count, const GLuint* shaders, GLenum binaryFormat, const void* binary, GLsizei length);
typedef void (OPENGL_API_CALL PFNGLGETSHADERPRECISIONFORMATPROC)(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
typedef void (OPENGL_API_CALL PFNGLDEPTHRANGEFPROC)(GLfloat n, GLfloat f);
typedef void (OPENGL_API_CALL PFNGLCLEARDEPTHFPROC)(GLfloat d);
typedef void (OPENGL_API_CALL PFNGLGETPROGRAMBINARYPROC)(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary);
typedef void (OPENGL_API_CALL PFNGLPROGRAMBINARYPROC)(GLuint program, GLenum binaryFormat, const void* binary, GLsizei length);
typedef void (OPENGL_API_CALL PFNGLPROGRAMPARAMETERIPROC)(GLuint program, GLenum pname, GLint value);
typedef void (OPENGL_API_CALL PFNGLUSEPROGRAMSTAGESPROC)(GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (OPENGL_API_CALL PFNGLACTIVESHADERPROGRAMPROC)(GLuint pipeline, GLuint program);
typedef GLuint(OPENGL_API_CALL PFNGLCREATESHADERPROGRAMVPROC)(GLenum type, GLsizei count, const GLchar* const* strings);
typedef void (OPENGL_API_CALL PFNGLBINDPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (OPENGL_API_CALL PFNGLDELETEPROGRAMPIPELINESPROC)(GLsizei n, const GLuint* pipelines);
typedef void (OPENGL_API_CALL PFNGLGENPROGRAMPIPELINESPROC)(GLsizei n, GLuint* pipelines);
typedef GLboolean(OPENGL_API_CALL PFNGLISPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (OPENGL_API_CALL PFNGLGETPROGRAMPIPELINEIVPROC)(GLuint pipeline, GLenum pname, GLint* params);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM1IPROC)(GLuint program, GLint location, GLint v0);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM1IVPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM1FPROC)(GLuint program, GLint location, GLfloat v0);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM1FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM1DPROC)(GLuint program, GLint location, GLdouble v0);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM1DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM1UIPROC)(GLuint program, GLint location, GLuint v0);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM1UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM2IPROC)(GLuint program, GLint location, GLint v0, GLint v1);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM2IVPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM2FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM2FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM2DPROC)(GLuint program, GLint location, GLdouble v0, GLdouble v1);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM2DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM2UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM2UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM3IPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM3IVPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM3FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM3FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM3DPROC)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM3DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM3UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM3UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM4IPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM4IVPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM4FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM4FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM4DPROC)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM4DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM4UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORM4UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (OPENGL_API_CALL PFNGLVALIDATEPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (OPENGL_API_CALL PFNGLGETPROGRAMPIPELINEINFOLOGPROC)(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBL1DPROC)(GLuint index, GLdouble x);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBL2DPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBL3DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBL4DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBL1DVPROC)(GLuint index, const GLdouble* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBL2DVPROC)(GLuint index, const GLdouble* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBL3DVPROC)(GLuint index, const GLdouble* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBL4DVPROC)(GLuint index, const GLdouble* v);
typedef void (OPENGL_API_CALL PFNGLVERTEXATTRIBLPOINTERPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);
typedef void (OPENGL_API_CALL PFNGLGETVERTEXATTRIBLDVPROC)(GLuint index, GLenum pname, GLdouble* params);
typedef void (OPENGL_API_CALL PFNGLVIEWPORTARRAYVPROC)(GLuint first, GLsizei count, const GLfloat* v);
typedef void (OPENGL_API_CALL PFNGLVIEWPORTINDEXEDFPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (OPENGL_API_CALL PFNGLVIEWPORTINDEXEDFVPROC)(GLuint index, const GLfloat* v);
typedef void (OPENGL_API_CALL PFNGLSCISSORARRAYVPROC)(GLuint first, GLsizei count, const GLint* v);
typedef void (OPENGL_API_CALL PFNGLSCISSORINDEXEDPROC)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (OPENGL_API_CALL PFNGLSCISSORINDEXEDVPROC)(GLuint index, const GLint* v);
typedef void (OPENGL_API_CALL PFNGLDEPTHRANGEARRAYVPROC)(GLuint first, GLsizei count, const GLdouble* v);
typedef void (OPENGL_API_CALL PFNGLDEPTHRANGEINDEXEDPROC)(GLuint index, GLdouble n, GLdouble f);
typedef void (OPENGL_API_CALL PFNGLGETFLOATI_VPROC)(GLenum target, GLuint index, GLfloat* data);
typedef void (OPENGL_API_CALL PFNGLGETDOUBLEI_VPROC)(GLenum target, GLuint index, GLdouble* data);

OPENGL_API_ENTRY PFNGLRELEASESHADERCOMPILERPROC* glReleaseShaderCompiler;
OPENGL_API_ENTRY PFNGLSHADERBINARYPROC* glShaderBinary;
OPENGL_API_ENTRY PFNGLGETSHADERPRECISIONFORMATPROC* glGetShaderPrecisionFormat;
OPENGL_API_ENTRY PFNGLDEPTHRANGEFPROC* glDepthRangef;
OPENGL_API_ENTRY PFNGLCLEARDEPTHFPROC* glClearDepthf;
OPENGL_API_ENTRY PFNGLGETPROGRAMBINARYPROC* glGetProgramBinary;
OPENGL_API_ENTRY PFNGLPROGRAMBINARYPROC* glProgramBinary;
OPENGL_API_ENTRY PFNGLPROGRAMPARAMETERIPROC* glProgramParameteri;
OPENGL_API_ENTRY PFNGLUSEPROGRAMSTAGESPROC* glUseProgramStages;
OPENGL_API_ENTRY PFNGLACTIVESHADERPROGRAMPROC* glActiveShaderProgram;
OPENGL_API_ENTRY PFNGLCREATESHADERPROGRAMVPROC* glCreateShaderProgramv;
OPENGL_API_ENTRY PFNGLBINDPROGRAMPIPELINEPROC* glBindProgramPipeline;
OPENGL_API_ENTRY PFNGLDELETEPROGRAMPIPELINESPROC* glDeleteProgramPipelines;
OPENGL_API_ENTRY PFNGLGENPROGRAMPIPELINESPROC* glGenProgramPipelines;
OPENGL_API_ENTRY PFNGLISPROGRAMPIPELINEPROC* glIsProgramPipeline;
OPENGL_API_ENTRY PFNGLGETPROGRAMPIPELINEIVPROC* glGetProgramPipelineiv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM1IPROC* glProgramUniform1i;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM1IVPROC* glProgramUniform1iv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM1FPROC* glProgramUniform1f;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM1FVPROC* glProgramUniform1fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM1DPROC* glProgramUniform1d;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM1DVPROC* glProgramUniform1dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM1UIPROC* glProgramUniform1ui;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM1UIVPROC* glProgramUniform1uiv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM2IPROC* glProgramUniform2i;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM2IVPROC* glProgramUniform2iv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM2FPROC* glProgramUniform2f;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM2FVPROC* glProgramUniform2fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM2DPROC* glProgramUniform2d;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM2DVPROC* glProgramUniform2dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM2UIPROC* glProgramUniform2ui;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM2UIVPROC* glProgramUniform2uiv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM3IPROC* glProgramUniform3i;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM3IVPROC* glProgramUniform3iv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM3FPROC* glProgramUniform3f;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM3FVPROC* glProgramUniform3fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM3DPROC* glProgramUniform3d;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM3DVPROC* glProgramUniform3dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM3UIPROC* glProgramUniform3ui;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM3UIVPROC* glProgramUniform3uiv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM4IPROC* glProgramUniform4i;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM4IVPROC* glProgramUniform4iv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM4FPROC* glProgramUniform4f;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM4FVPROC* glProgramUniform4fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM4DPROC* glProgramUniform4d;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM4DVPROC* glProgramUniform4dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM4UIPROC* glProgramUniform4ui;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORM4UIVPROC* glProgramUniform4uiv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX2FVPROC* glProgramUniformMatrix2fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX3FVPROC* glProgramUniformMatrix3fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX4FVPROC* glProgramUniformMatrix4fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX2DVPROC* glProgramUniformMatrix2dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX3DVPROC* glProgramUniformMatrix3dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX4DVPROC* glProgramUniformMatrix4dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC* glProgramUniformMatrix2x3fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC* glProgramUniformMatrix3x2fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC* glProgramUniformMatrix2x4fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC* glProgramUniformMatrix4x2fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC* glProgramUniformMatrix3x4fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC* glProgramUniformMatrix4x3fv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC* glProgramUniformMatrix2x3dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC* glProgramUniformMatrix3x2dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC* glProgramUniformMatrix2x4dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC* glProgramUniformMatrix4x2dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC* glProgramUniformMatrix3x4dv;
OPENGL_API_ENTRY PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC* glProgramUniformMatrix4x3dv;
OPENGL_API_ENTRY PFNGLVALIDATEPROGRAMPIPELINEPROC* glValidateProgramPipeline;
OPENGL_API_ENTRY PFNGLGETPROGRAMPIPELINEINFOLOGPROC* glGetProgramPipelineInfoLog;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBL1DPROC* glVertexAttribL1d;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBL2DPROC* glVertexAttribL2d;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBL3DPROC* glVertexAttribL3d;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBL4DPROC* glVertexAttribL4d;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBL1DVPROC* glVertexAttribL1dv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBL2DVPROC* glVertexAttribL2dv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBL3DVPROC* glVertexAttribL3dv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBL4DVPROC* glVertexAttribL4dv;
OPENGL_API_ENTRY PFNGLVERTEXATTRIBLPOINTERPROC* glVertexAttribLPointer;
OPENGL_API_ENTRY PFNGLGETVERTEXATTRIBLDVPROC* glGetVertexAttribLdv;
OPENGL_API_ENTRY PFNGLVIEWPORTARRAYVPROC* glViewportArrayv;
OPENGL_API_ENTRY PFNGLVIEWPORTINDEXEDFPROC* glViewportIndexedf;
OPENGL_API_ENTRY PFNGLVIEWPORTINDEXEDFVPROC* glViewportIndexedfv;
OPENGL_API_ENTRY PFNGLSCISSORARRAYVPROC* glScissorArrayv;
OPENGL_API_ENTRY PFNGLSCISSORINDEXEDPROC* glScissorIndexed;
OPENGL_API_ENTRY PFNGLSCISSORINDEXEDVPROC* glScissorIndexedv;
OPENGL_API_ENTRY PFNGLDEPTHRANGEARRAYVPROC* glDepthRangeArrayv;
OPENGL_API_ENTRY PFNGLDEPTHRANGEINDEXEDPROC* glDepthRangeIndexed;
OPENGL_API_ENTRY PFNGLGETFLOATI_VPROC* glGetFloati_v;
OPENGL_API_ENTRY PFNGLGETDOUBLEI_VPROC* glGetDoublei_v;

#endif 