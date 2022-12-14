#include <LDL/Graphics/Cpu/CpuImage.hpp>
#include <assert.h>
#include <string.h>

using namespace LDL::Graphics;

CpuImage::CpuImage(LDL::Loaders::ImageLoader* imageLoader, LDL::Allocators::Allocator* allocator) :
	_Allocator(allocator),
	_BytesPerPixel(0),
	_Pixels(NULL)
{
	assert(imageLoader != NULL);

	_Size = imageLoader->Size();
	_BytesPerPixel = imageLoader->BytesPerPixel();
	_Pixels = imageLoader->Pixels();

	assert(_Size.PosX() > 0);
	assert(_Size.PosY() > 0);
	assert(_BytesPerPixel > 0);
	assert(imageLoader->Pixels() != NULL);

	size_t bytes = _Size.PosX() * _Size.PosY() * _BytesPerPixel;

	_Pixels = (uint8_t*)_Allocator->Allocate(bytes);

	memcpy(_Pixels, imageLoader->Pixels(), bytes);
}

CpuImage::CpuImage(LDL::Loaders::ImageLoader* imageLoader) :
	_Allocator(NULL),
	_BytesPerPixel(0),
	_Pixels(NULL)
{
	assert(imageLoader != NULL);

	_Size = imageLoader->Size();
	_BytesPerPixel = imageLoader->BytesPerPixel();
	_Pixels = imageLoader->Pixels();

	assert(_Size.PosX() > 0);
	assert(_Size.PosY() > 0);
	assert(_BytesPerPixel > 0);
	assert(imageLoader->Pixels() != NULL);

	size_t bytes = _Size.PosX() * _Size.PosY() * _BytesPerPixel;

	_Pixels = new uint8_t[bytes];

	memcpy(_Pixels, imageLoader->Pixels(), bytes);
}

CpuImage::CpuImage(const Point2u& size, uint8_t bytesPerPixel) :
	_Allocator(NULL),
	_Size(size),
	_BytesPerPixel(bytesPerPixel),
	_Pixels(NULL)
{
	assert(_Size.PosX() > 0);
	assert(_Size.PosY() > 0);
	assert(_BytesPerPixel > 0);

	_Pixels = new uint8_t[_Size.PosX() * _Size.PosY() * _BytesPerPixel];
}

CpuImage::CpuImage(LDL::Allocators::Allocator* allocator, const Point2u& size, uint8_t bytesPerPixel) :
	_Allocator(allocator),
	_Size(size),
	_BytesPerPixel(bytesPerPixel),
	_Pixels(NULL)
{
	assert(_Size.PosX() > 0);
	assert(_Size.PosY() > 0);
	assert(_BytesPerPixel > 0);

	_Pixels = (uint8_t*)_Allocator->Allocate(_Size.PosX() * _Size.PosY() * _BytesPerPixel);
}

CpuImage::~CpuImage()
{
	if (_Allocator != NULL)
		_Allocator->Deallocate(_Pixels);
	else
		delete[] _Pixels;
}

const Point2u& CpuImage::Size()
{
	return _Size;
}

uint8_t CpuImage::BytesPerPixel()
{
	return _BytesPerPixel;
}

uint8_t* CpuImage::Pixels()
{
	return _Pixels;
}

LDL::Allocators::Allocator* CpuImage::Allocator()
{
	return _Allocator;
}

Color CpuImage::Pixel(const Point2u& pos)
{
	size_t i = ((Size().PosX() * pos.PosY()) + pos.PosX()) * _BytesPerPixel;

	return Color(_Pixels[i], _Pixels[i + 1], _Pixels[i + 2]);
}