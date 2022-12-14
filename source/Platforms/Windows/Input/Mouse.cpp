#include <LDL/Input/Mouse.hpp>
#include "../Windows.hpp"
#include <LDL/Core/RuntimeError.hpp>

const LDL::Graphics::Point2u& LDL::Input::Mouse::Pos()
{
    POINT point;

    if (GetCursorPos(&point) == 0)
        throw LDL::Core::RuntimeError("GetCursorPos failed");

    _Pos = LDL::Graphics::Point2u(point.x, point.y);

    return _Pos;
}