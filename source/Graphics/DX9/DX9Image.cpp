#include "DX9Image.hpp"
#include <assert.h>

LDL::Graphics::DX9Image::DX9Image(const LDL::Graphics::Point2u& size, size_t bytesPerPixel, uint8_t* pixels)
{
	assert(size.PosX() > 0);
	assert(size.PosY() > 0);
	assert(bytesPerPixel >= 1 && bytesPerPixel <= 4);
	assert(pixels != NULL);
}

LDL::Graphics::DX9Image::~DX9Image()
{
}

const LDL::Graphics::Point2u& LDL::Graphics::DX9Image::Size()
{
	return _Size;
}