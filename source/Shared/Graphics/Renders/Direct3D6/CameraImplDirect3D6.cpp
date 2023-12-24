#include "CameraImplDirect3D6.hpp"
#include <LDL/Math/Vec3.hpp>
#include <LDL/Math/Funcs.hpp>

using namespace LDL::Graphics;
using namespace LDL::Math;

CameraImplDirect3D6::CameraImplDirect3D6(RenderImpl* renderImpl, const Vec2u& pos, const Vec2u& size) :
	_RenderImpl(renderImpl),
	_Pos(pos),
	_Size(size)
{
}

const Vec2u& CameraImplDirect3D6::Pos()
{
	return _Pos;
}

const Vec2u& CameraImplDirect3D6::Size()
{
	return _Size;
}

void CameraImplDirect3D6::Pos(const Vec2u& pos)
{
	//_RenderImpl->_ModelView = Translate(_RenderImpl->_ModelView, Vec3f((float)pos.x, (float)pos.y, 0.0f));
}

void CameraImplDirect3D6::Size(const Vec2u& size)
{
}
