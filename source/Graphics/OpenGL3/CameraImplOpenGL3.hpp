#ifndef LDL_Graphics_OpenGL3_CameraImpl_hpp
#define LDL_Graphics_OpenGL3_CameraImpl_hpp

#include "RenderImplOpenGL3.hpp"
#include "../CameraImpl.hpp"

namespace LDL
{
	namespace Graphics
	{
		class CameraImplOpenGL3 : public CameraImpl
		{
		public:
			CameraImplOpenGL3(RenderImpl* renderImpl, const Math::Vec2u& pos, const Math::Vec2u& size);
			const Math::Vec2u& Pos();
			const Math::Vec2u& Size();
			void Pos(const Math::Vec2u& pos);
			void Size(const Math::Vec2u& size);
		private:
			RenderImpl* _RenderImpl;
			LDL::Math::Vec2u _Pos;
			LDL::Math::Vec2u _Size;
		};
	}
}

#endif    