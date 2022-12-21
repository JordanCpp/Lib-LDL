#ifndef LDL_Graphics_Color_hpp
#define LDL_Graphics_Color_hpp

#include <LDL/Core/Types.hpp>

namespace LDL
{
	namespace Graphics
	{
		class Color
		{
		public:
			Color();
			Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 255);
			uint8_t Red() const;
			uint8_t Green() const;
			uint8_t Blue() const;
			uint8_t Alpha() const;
			uint32_t toInt() const;
		private:
        #if (_WIN32 || _WIN64)
			uint8_t _Blue;
			uint8_t _Green;
			uint8_t _Red;
        #else
			uint8_t _Red;
			uint8_t _Green;
			uint8_t _Blue;
        #endif
			uint8_t _Alpha;
		};
	}
}

#endif    