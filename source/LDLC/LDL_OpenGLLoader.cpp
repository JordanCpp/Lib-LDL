#include <LDLC/LDL_OpenGLLoader.h>
#include <LDL/OpenGL/OpenGLLoader.hpp>

using namespace LDL;

struct LDL_OpenGLLoader
{
	OpenGLLoader OpenGLLoader;
	LDL_OpenGLLoader(size_t major, size_t minor);
};

LDL_OpenGLLoader::LDL_OpenGLLoader(size_t major, size_t minor) :
	OpenGLLoader(major, minor)
{
}

LDL_OpenGLLoader * LDL_OpenGLLoaderNew(size_t major, size_t minor)
{
	LDL_OpenGLLoader* p = new LDL_OpenGLLoader(major, minor);

	return p;
}

void LDL_OpenGLLoaderFree(LDL_OpenGLLoader * openGLLoader)
{
	delete openGLLoader;
}