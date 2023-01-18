#ifndef LDL_Graphics_DirectX9_Direct3D_ScreenshoterImpl_hpp
#define LDL_Graphics_DirectX9_Direct3D_ScreenshoterImpl_hpp

#include <LDL/Graphics/Render.hpp>
#include <LDL/Graphics/Screenshoter.hpp>
#include <LDL/Graphics/Base/BaseScreenshoter.hpp>

namespace LDL
{
	namespace Graphics
	{
		class ScreenshoterImpl
		{
		public:
			ScreenshoterImpl(const std::string& path, const std::string& name, Render* render, Surface* image);
			void Shot();
		private:
			LDL::Graphics::BaseScreenshoter _BaseScreenshoter;
			std::string _ShortPath;
			std::string _Name;
			std::string _FullPath;
			Render* _Render;
			Surface* _Image;
		};
	}
}

#endif  