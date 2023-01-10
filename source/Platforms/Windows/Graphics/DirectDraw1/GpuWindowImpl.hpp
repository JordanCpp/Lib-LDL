#ifndef LDL_Platforms_Windows_Graphics_DirectDraw1_GpuWindowImpl_hpp
#define LDL_Platforms_Windows_Graphics_DirectDraw1_GpuWindowImpl_hpp

#include <LDL/Graphics/Gpu/GpuWindow.hpp>
#include "../MainWindow.hpp"
#include <ddraw.h>

namespace LDL
{
	namespace Graphics
	{
		class GpuWindowImpl
		{
		public:
			GpuWindowImpl(const Point2u& pos, const Point2u& size, const std::string& title, size_t mode = LDL::Enums::WindowMode::Resized);
			~GpuWindowImpl();
			void Present();
			bool GetEvent(LDL::Events::Event& event);
			bool WaitEvent(LDL::Events::Event& event);
			void StopEvent();
			void Title(const std::string& title);
			const std::string& Title();
			const Point2u& Size();
			const Point2u& View();
			const Point2u& Pos();
			HWND Hwnd();
		private:
			MainWindow _Window;
		};
	}
}

#endif  