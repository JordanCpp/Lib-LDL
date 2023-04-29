#include <Arcanum/Game/Engine.hpp>

using namespace Arcanum::Game;
using namespace LDL::Graphics;
using namespace LDL::Allocators;

Engine::Engine(Settings* settings) :
	_Settings(settings),
	_PathManager(settings->Path()),
	_ImageAllocator(Allocator::Mb * 2),
	_ImageLoader(&_ImageAllocator),
	_Window(Point2u(0,0), _Settings->Size(), _Settings->Title()),
	_Render(&_RenderContext, &_Window),
	_FpsLimiter(_Settings->Fps())
{
	_ArtLoader.Load("data/art/scenery/engine.ART");
	_ArtLoader.Load("data/art/scenery/engine_old.ART");
	_ArtLoader.Frame(0);

	_Texture = new Texture(&_RenderContext, _ArtLoader.Size(), _ArtLoader.Pixels(), 4);
}

void Engine::Run()
{
	LDL::Events::Event report = { 0 };

	while (_Window.GetEvent(report))
	{
		_FpsLimiter.Mark();
		_FpsCounter.Start();

		if (report.Type == LDL::Events::IsQuit)
		{
			_Window.StopEvent();
		}

		_Render.Begin();

		_Render.Color(Color(255, 5, 255));
		_Render.Clear();
		
		_Render.Draw(_Texture, Point2u(0, 0));

		_Render.End();

		_FpsLimiter.Throttle();

		if (_FpsCounter.Calc())
		{
			_Title = _Settings->Title() + " Fps: " + _Convert.Convert(_FpsCounter.Fps());
			_Window.Title(_Title);
			_FpsCounter.Clear();
		}
	}
}