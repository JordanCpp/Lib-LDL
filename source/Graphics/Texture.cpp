#include <LDL/Graphics/Texture.hpp>

#ifdef LDL_RENDER_SOFTWARE
#include "Software/TextureImpl.hpp"
#elif LDL_RENDER_OPENGL1
#include "OpenGL1/TextureImpl.hpp"
#elif LDL_GPU_SUPPORT_DIRECTX1
#include "DirectDraw/TextureImpl.hpp"
#elif LDL_GPU_SUPPORT_DIRECTX5
#include "DirectX5/Direct3D/TextureImpl.hpp"
#endif

using namespace LDL::Graphics;

Texture::Texture(const Point2u& size, size_t bytesPerPixel, uint8_t* pixels) :
	_TextureImpl(new TextureImpl(size, bytesPerPixel, pixels))
{
}

Texture::~Texture()
{
	delete _TextureImpl;
}

const Point2u& Texture::Size()
{
	return _TextureImpl->Size();
}

size_t Texture::Id()
{
	return _TextureImpl->Id();
}