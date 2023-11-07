#include "TextureImplOpenGL3.hpp"
#include <LDL/OpenGL/OpenGL1_1.hpp>
#include <assert.h>
#include "../OpenGL/Util.hpp"
#include <iostream>

using namespace LDL::Graphics;
using namespace LDL::Math;

TextureImplOpenGL3::TextureImplOpenGL3(RenderContextImpl* renderContextImpl, const Vec2u& size, uint8_t* pixels, uint8_t bytesPerPixel) :
	_RenderContextImpl(renderContextImpl),
	_Id(0)
{
	assert(size.x > 0);
	assert(size.y > 0);
	assert(bytesPerPixel >= 1 && bytesPerPixel <= 4);
	assert(pixels != NULL);

	_Size = size;

	GL_CHECK(glGenTextures(1, (GLuint*)&_Id));
	GL_CHECK(glBindTexture(GL_TEXTURE_2D, (GLuint)_Id));

	GL_CHECK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST));
	GL_CHECK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST));

	GLint format = 0;

	if (bytesPerPixel == 3)
		format = GL_RGB;
	else
		format = GL_RGBA;

	GL_CHECK(glTexImage2D(GL_TEXTURE_2D, 0, format, (GLsizei)_Size.x, (GLsizei)_Size.y, 0, format, GL_UNSIGNED_BYTE, pixels));
}

TextureImplOpenGL3::TextureImplOpenGL3(RenderContextImpl* renderContextImpl, const Vec2u& size, uint8_t bytesPerPixel) :
	_RenderContextImpl(renderContextImpl),
	_Id(0)
{
}

TextureImplOpenGL3::~TextureImplOpenGL3()
{
	GL_CHECK(glDeleteTextures(0, (GLuint*)&_Id));
}

const Vec2u& TextureImplOpenGL3::Size()
{
	return _Size;
}

const Vec2u& TextureImplOpenGL3::Quad()
{
	return _Quad;
}

size_t TextureImplOpenGL3::Id()
{
	return _Id;
}

void TextureImplOpenGL3::Copy(const Vec2u& dstPos, const Vec2u& srcSize, uint8_t* pixels, uint8_t bytesPerPixel)
{
	GLint format = 0;

	if (bytesPerPixel == 3)
		format = GL_RGB;
	else
		format = GL_RGBA;

	GL_CHECK(glTexSubImage2D(GL_TEXTURE_2D, 0, (GLint)dstPos.x, (GLint)dstPos.y, (GLsizei)srcSize.x, (GLsizei)srcSize.y, format, GL_UNSIGNED_BYTE, pixels));
}

void TextureImplOpenGL3::Copy(const Vec2u& dstPos, Surface* surface, const Vec2u& srcSize)
{
	Copy(dstPos, srcSize, surface->Pixels(), surface->BytesPerPixel());
}