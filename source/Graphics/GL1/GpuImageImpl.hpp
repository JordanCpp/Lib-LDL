#ifndef LDL_Graphics_GL1_GpuImageImpl_hpp
#define LDL_Graphics_GL1_GpuImageImpl_hpp

#include <LDL/Graphics/Primitives/Point2u.hpp>

namespace LDL
{
	namespace Graphics
	{
		class GpuImageImpl
		{
		public:
			GpuImageImpl(const LDL::Graphics::Point2u & size, size_t bytesPerPixel, uint8_t* pixels);
			~GpuImageImpl();
			const LDL::Graphics::Point2u& Size();
			size_t Id();
		private:
			size_t _Id;
			LDL::Graphics::Point2u _Size;
		};
	}
}

#endif    