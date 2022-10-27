#include <LDL/Graphics/CpuImage.hpp>
#include <cassert>

LDL::Graphics::CpuImage::CpuImage(const LDL::Graphics::Point2u& size, size_t bytesPerPixel, uint8_t* pixels) :
	_Size(size),
	_BytesPerPixel(bytesPerPixel),
	_Pixels(pixels)
{
	assert(_Size.PosX() > 0);
	assert(_Size.PosY() > 0);
	assert(_BytesPerPixel > 0);
	assert(_Pixels != nullptr);
}

const LDL::Graphics::Point2u& LDL::Graphics::CpuImage::Size()
{
	return _Size;
}

size_t LDL::Graphics::CpuImage::BytesPerPixel()
{
	return _BytesPerPixel;
}

uint8_t* LDL::Graphics::CpuImage::Pixels()
{
	return _Pixels;
}