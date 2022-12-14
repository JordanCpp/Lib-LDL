#ifndef LDL_Time_FpsCounter_hpp
#define LDL_Time_FpsCounter_hpp

#include <LDL/Time/Ticks.hpp>

namespace LDL
{
	namespace Time
	{
		class FpsCounter
		{
		public:
			FpsCounter();
			void Start();
			bool Calc();
			size_t Fps();
			void Clear();
		private:
			size_t _Current;
			size_t	_Delta;
			size_t	_Old;
			size_t _Fps;
		};
	}
}

#endif     