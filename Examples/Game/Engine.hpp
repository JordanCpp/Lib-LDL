#ifndef Game_Engine_hpp
#define Game_Engine_hpp

#include <LDL/Graphics/Gpu/GpuWindow.hpp>
#include <LDL/Graphics/Gpu/GpuImage.hpp>
#include <LDL/Graphics/Gpu/GpuRender.hpp>
#include <LDL/Core/RuntimeError.hpp>
#include <LDL/Loaders/ImageBufferLoader.hpp>
#include <LDL/Allocators/FixedLinear.hpp>
#include <LDL/Time/FpsCounter.hpp>
#include <LDL/Core/IntegerToString.hpp>
#include <LDL/Time/FpsLimiter.hpp>

namespace Game
{
	class Engine
	{
	public:
		Engine(const LDL::Graphics::Point2u& pos, const LDL::Graphics::Point2u& size, const std::string& title);
		void Run();
	private:
		LDL::Allocators::FixedLinear _Allocator;
		LDL::Loaders::ImageBufferLoader _ImageLoader;
		LDL::Graphics::GpuWindow _Window;
		LDL::Graphics::GpuRender _Render;
		LDL::Time::FpsCounter _FpsCounter;
		LDL::Core::IntegerToString _Convert;
		LDL::Time::FpsLimiter _FpsLimiter;
	};
}

#endif    