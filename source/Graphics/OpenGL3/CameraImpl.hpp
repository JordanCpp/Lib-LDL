#ifndef LDL_Graphics_OpenGL3_CameraImpl_hpp
#define LDL_Graphics_OpenGL3_CameraImpl_hpp

#include "RenderImpl.hpp"

namespace LDL
{
	namespace Graphics
	{
		class CameraImpl
		{
		public:
			CameraImpl(RenderImpl* renderImpl, const Math::Vec2u& pos, const Math::Vec2u& size);
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