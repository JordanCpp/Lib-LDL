#include <LDL/Graphics/Texture.hpp>
#include "Creators/TextureImplCreator.hpp"
#include <LDL/Core/RuntimeError.hpp>

using namespace LDL::Core;
using namespace LDL::Math;
using namespace LDL::Graphics;
using namespace LDL::Graphics::Creators;

Texture::Texture(RenderContext* renderContext, const Vec2u& size, uint8_t* pixels, uint8_t bytesPerPixel)
{
	TextureImplCreator creator;

	_TextureImpl = creator.Create(renderContext, size, pixels, bytesPerPixel);

}

Texture::Texture(RenderContext* renderContext, const Vec2u& size, uint8_t bytesPerPixel)
{
	TextureImplCreator creator;

	_TextureImpl = creator.Create(renderContext, size, bytesPerPixel);
}

Texture::~Texture()
{
	delete _TextureImpl;
}

void Texture::Copy(const Vec2u& dstPos, const Vec2u& srcSize, uint8_t* pixels, size_t bytesPerPixel)
{
	_TextureImpl->Copy(dstPos, srcSize, pixels, bytesPerPixel);
}

void Texture::Copy(const Vec2u& dstPos, Surface* surface, const Vec2u& srcSize)
{
	_TextureImpl->Copy(dstPos, surface, srcSize);
}

const Vec2u& Texture::Size()
{
	return _TextureImpl->Size();
}

TextureImpl* Texture::GetTextureImpl()
{
	return _TextureImpl;
}