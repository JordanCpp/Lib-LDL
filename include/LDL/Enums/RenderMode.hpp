#ifndef LDL_Enums_RenderMode_hpp
#define LDL_Enums_RenderMode_hpp

namespace LDL
{
	namespace Enums
	{
		class RenderMode
		{
		public:
			enum
			{
				Software = 1,
				OpenGL1,
				OpenGL2,
				OpenGL3,
				DirectDraw,
				Direct3D9
			};
		};
	}
}

#endif