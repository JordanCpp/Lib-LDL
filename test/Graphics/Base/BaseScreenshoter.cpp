#include <LDL/Core/TestEqual.hpp>
#include <LDL/Graphics/Base/BaseScreenshoter.hpp>

void Create()
{
	LDL::Graphics::BaseScreenshoter baseScreenshoter;

	LDL_TEST_EQUAL(baseScreenshoter.Prefix().length() > 0);
}

int main()
{
	Create();

	return 0;
}