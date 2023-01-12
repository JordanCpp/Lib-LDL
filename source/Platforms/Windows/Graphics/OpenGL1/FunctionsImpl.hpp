#ifndef LDL_Platforms_Windows_Graphics_OpenGL1_FunctionsImpl_hpp
#define LDL_Platforms_Windows_Graphics_OpenGL1_FunctionsImpl_hpp

#include "../../Windows.hpp"
#include <LDL/Core/Library.hpp>

namespace LDL
{
	namespace Graphics
	{
		class FunctionsImpl
		{
		public:
			FunctionsImpl(const char* path);
			LDL::VoidFuncPtr Function(const char* name);
		private:
			LDL::Core::Library _Library;
		};
	}
}

#endif  