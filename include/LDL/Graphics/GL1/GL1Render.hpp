#ifndef LDL_Graphics_GL1Render_hpp
#define LDL_Graphics_GL1Render_hpp

#include <LDL/Graphics/Base/BaseRender.hpp>
#include <LDL/Graphics/GL1/GL1Window.hpp>
#include <LDL/Graphics/GL1/GL1Image.hpp>
#include <LDL/Graphics/GL1/GL1Screen.hpp>

namespace LDL
{
	namespace Graphics
	{
		class GL1Render
		{
		public:
			GL1Render(LDL::Graphics::GL1Window* window);
			void Begin();
			void End();
			const LDL::Graphics::Point2u& Size();
			const LDL::Graphics::Color& Color();
			void Clear();
			void Color(const LDL::Graphics::Color& color);
			void Pixel(const LDL::Graphics::Point2u& pos);
			void Fill(const LDL::Graphics::Point2u& pos, const LDL::Graphics::Point2u& size);
			void Line(const LDL::Graphics::Point2u& pos1, const LDL::Graphics::Point2u& pos2);
			void Draw(LDL::Graphics::GL1Image* image, const LDL::Graphics::Point2u& pos, const LDL::Graphics::Point2u& size);
			void Draw(LDL::Graphics::GL1Image* image, const LDL::Graphics::Point2u& pos);
			void Draw(LDL::Graphics::CpuImage* image, const LDL::Graphics::Point2u& pos, const LDL::Graphics::Point2u& size);
			void Draw(LDL::Graphics::CpuImage* image, const LDL::Graphics::Point2u& pos);
		private:
			LDL::Graphics::GL1Window* _Window;
			LDL::Graphics::BaseRender _BaseRender;
			LDL::Graphics::GL1Screen _Screen;
		};
	}
}

#endif    