#include <LDL/Loaders/ImageBufferLoader.hpp>
#include <LDL/Core/RuntimeError.hpp>

static LDL::Allocators::Allocator* StbImageAllocator;

#define STBI_MALLOC(sz)                    StbImageAllocator->Allocate(sz);
#define STBI_REALLOC_SIZED(p,oldsz,newsz)  StbImageAllocator->ReallocateSized(p, oldsz, newsz)
#define STBI_FREE(p)                       StbImageAllocator->Deallocate(p) 

#define STB_IMAGE_IMPLEMENTATION
#define STBI_NO_THREAD_LOCALS
#include "../dependencies/stb/stb_image.h"  

LDL::Loaders::ImageBufferLoader::ImageBufferLoader(LDL::Allocators::Allocator* allocator) :
	_Allocator(allocator),
	_BytesPerPixel(0),
	_Pixels(NULL)
{
	assert(allocator != NULL);

	StbImageAllocator = _Allocator;
}

LDL::Loaders::ImageBufferLoader::~ImageBufferLoader()
{
	Clear();
}

void LDL::Loaders::ImageBufferLoader::Clear()
{
	_Allocator->Reset();
	_Pixels = NULL;
	_Size = LDL::Graphics::Point2u(0, 0);
	_BytesPerPixel = 0;
}

const LDL::Graphics::Point2u& LDL::Loaders::ImageBufferLoader::Size()
{
	return _Size;
}

uint8_t LDL::Loaders::ImageBufferLoader::BytesPerPixel()
{
	return _BytesPerPixel;
}

uint8_t* LDL::Loaders::ImageBufferLoader::Pixels()
{
	return _Pixels;
}

void LDL::Loaders::ImageBufferLoader::Load(const std::string& path)
{
	if (path.empty())
		throw LDL::Core::RuntimeError("Argument path is empty");

	Clear();

	int width         = 0;
	int height        = 0;
	int bytesPerPixel = 0;

	stbi_set_flip_vertically_on_load(true);

	_Pixels = stbi_load(path.c_str(), &width, &height, &bytesPerPixel, 0);

	if (width <= 0 || height <= 0 || bytesPerPixel <= 0 || _Pixels == NULL)
		throw LDL::Core::RuntimeError("stbi_load " + path + " failed");

	_Size = LDL::Graphics::Point2u(width, height);
	_BytesPerPixel = bytesPerPixel;
}

void LDL::Loaders::ImageBufferLoader::Load(const LDL::Graphics::Color& color, const std::string& path)
{
	Load(path);

	uint8_t* srcPixels = Pixels();

	size_t bytes = Size().PosX() * Size().PosY() * 4;

	uint8_t* dstPixels = (uint8_t*)_Allocator->Allocate(bytes);

	for (size_t i = 0; i < bytes; i++)
	{
		if (srcPixels[3 * i + 0] == color.Red() && srcPixels[3 * i + 1] == color.Green() && srcPixels[3 * i + 2] == color.Blue())
		{
			dstPixels[4 * i + 0] = 0;
			dstPixels[4 * i + 1] = 0;
			dstPixels[4 * i + 2] = 0;
			dstPixels[4 * i + 3] = 0;
		}
		else
		{
			dstPixels[4 * i + 0] = srcPixels[3 * i + 0];
			dstPixels[4 * i + 1] = srcPixels[3 * i + 1];
			dstPixels[4 * i + 2] = srcPixels[3 * i + 2];
			dstPixels[4 * i + 3] = 255;
		}

		_Pixels = dstPixels;
		_BytesPerPixel = 4;
	}
}