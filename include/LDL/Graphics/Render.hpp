#ifndef LDL_Graphics_Render_hpp
#define LDL_Graphics_Render_hpp

#include <LDL/Graphics/Surface.hpp>
#include <LDL/Graphics/Window.hpp>
#include <LDL/Graphics/Texture.hpp>

namespace LDL
{
	namespace Graphics
	{
		class RenderImpl;

		class Render: public LDL::Core::FastPimpl
		{
		public:
			Render(Window* window);
			~Render();
			void Buffer(uint8_t* dst);
			void Begin();
			void End();
			const Point2u& Size();
			const LDL::Graphics::Color& Color();
			void Clear();
			void Color(const LDL::Graphics::Color& color);
			void Pixel(const Point2u& pos);
			void Fill(const Point2u& pos, const Point2u& size);
			void Line(const Point2u& pos1, const Point2u& pos2);
			void Draw(Texture* image, const Point2u& pos, const Point2u& size);
			void Draw(Texture* image, const Point2u& pos);
			void Draw(Texture* image, const Point2u& dstPos, const Point2u& srcPos, const Point2u& srcSize);
			void Draw(Surface* image, const Point2u& pos, const Point2u& size);
			void Draw(Surface* image, const Point2u& pos);
		private:
			RenderImpl* _GpuRenderImpl;
		};
	}
}

#endif 