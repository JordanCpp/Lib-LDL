#ifndef LDL_Loaders_ImageLoader_hpp
#define LDL_Loaders_ImageLoader_hpp

#include <LDL/Graphics/Primitives/Point2u.hpp>
#include <LDL/Allocators/Allocator.hpp>
#include <LDL/Graphics/Primitives/Color.hpp>
#include <string>

namespace LDL
{
	namespace Loaders
	{
		class ImageLoader
		{
		public:
			ImageLoader(LDL::Allocators::Allocator* allocator);
			~ImageLoader();
			void Clear();
			const LDL::Graphics::Point2u& Size();
			uint8_t BytesPerPixel();
			uint8_t* Pixels();
			void CopyIf(uint8_t* dstPixels, uint8_t* srcPixels, size_t bytes, const LDL::Graphics::Color& color, uint8_t alpha);
			void Load(const std::string& path);
			void Load(const LDL::Graphics::Color& color, const std::string& path);
			void Load(uint8_t * data, size_t bytes);
			void Load(const LDL::Graphics::Color& color, uint8_t* data, size_t bytes);
		private:
			LDL::Allocators::Allocator* _Allocator;
			LDL::Graphics::Point2u _Size;
			uint8_t _BytesPerPixel;
			uint8_t* _Pixels;
		};
	}
}

#endif      