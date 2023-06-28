#ifndef LDL_Graphics_Direct3D9_CameraImplDirect3D9_hpp
#define LDL_Graphics_Direct3D9_CameraImplDirect3D9_hpp

#include "RenderImplDirect3D9.hpp"
#include "../CameraImpl.hpp"

namespace LDL
{
	namespace Graphics
	{
		class CameraImplDirect3D9 : public CameraImpl
		{
		public:
			CameraImplDirect3D9(RenderImpl* renderImpl, const Math::Vec2u& pos, const Math::Vec2u& size);
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