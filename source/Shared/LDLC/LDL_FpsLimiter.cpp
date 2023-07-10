#include <LDLC/LDL_FpsLimiter.h>
#include <LDL/Time/FpsLimiter.hpp>

using namespace LDL::Time;

struct LDL_FpsLimiter
{
	FpsLimiter _FpsLimiter;
	LDL_FpsLimiter(size_t fps);
};

LDL_FpsLimiter::LDL_FpsLimiter(size_t fps) :
	_FpsLimiter(fps)
{
}

LDL_FpsLimiter* LDL_FpsLimiterNew(size_t fps)
{
	LDL_FpsLimiter* p = new LDL_FpsLimiter(fps);

	return p;
}

void LDL_FpsLimiterFree(LDL_FpsLimiter* fpsLimiter)
{
	delete fpsLimiter;
}

void LDL_FpsLimiterMark(LDL_FpsLimiter* fpsLimiter)
{
	fpsLimiter->_FpsLimiter.Mark();
}

void LDL_FpsLimiterThrottle(LDL_FpsLimiter* fpsLimiter)
{
	fpsLimiter->_FpsLimiter.Throttle();
}