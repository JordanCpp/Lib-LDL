#ifndef LDL_Platforms_Windows_Graphics_GL1Window_hpp
#define LDL_Platforms_Windows_Graphics_GL1Window_hpp

#include <LDL/Platforms/Windows/Graphics/MainWindow.hpp>

namespace LDL
{
	namespace Graphics
	{
		namespace Windows
		{
			class GL1Window
			{
			public:
				GL1Window(const LDL::Graphics::Point2u& pos, const LDL::Graphics::Point2u& size, const std::string& title);
				~GL1Window();
				void Present();
				bool GetEvent(LDL::Events::Event& event);
				bool WaitEvent(LDL::Events::Event& event);
				void StopEvent();
				void Title(const std::string& title);
				const std::string& Title();
				const LDL::Graphics::Point2u& Size();
				const LDL::Graphics::Point2u& Pos();
			private:
				LDL::Graphics::Windows::MainWindow _Window;
				HGLRC _HGLRC;
			};
		}
	}
}

#endif  