#include <iostream>
#include <LDL/Core/RuntimeError.hpp>
#include <LDL/Loaders/ImageLoader.hpp>
#include <LDL/Time/FpsCounter.hpp>
#include <LDL/Core/NumberToString.hpp>
#include <LDL/Time/FpsLimiter.hpp>
#include <LDL/Allocators/FixedLinear.hpp>
#include <LDL/Graphics/Window.hpp>
#include <LDL/Graphics/Render.hpp>
#include <LDL/Graphics/Isometric.hpp>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace LDL::Graphics;
using namespace LDL::Events;
using namespace LDL::Time;
using namespace LDL::Core;
using namespace LDL::Allocators;
using namespace LDL::Loaders;
using namespace LDL::Enums;
using namespace LDL::Math;

size_t Random(size_t min, size_t max)
{
	return min + (rand() % (max - min + 1));
}

int main()
{
	try
	{
		srand((uint32_t)time(NULL));

		RenderContext renderContext;

		Window window(&renderContext, Vec2u(0, 0), Vec2u(800, 600), "12_TileMap2");
		Render render(&renderContext, &window);

		Event report;

		FixedLinear allocator(Allocator::Mb * 8);
		ImageLoader loader(&allocator);

		loader.Load("Data/SeasonsTiles.png");
		Texture image(&renderContext, loader.Size(), loader.Pixels(), loader.BytesPerPixel());

		FpsCounter fpsCounter;
		NumberToString convert;
		FpsLimiter fpsLimiter;

		Isometric isometric;

		Vec2u start = Vec2u(550, 0);
		Vec2u mapSize = Vec2u(9, 9);
		Vec2u tileSize = Vec2u(128, 64);

		size_t dx = 0;
		size_t dy = 0;
		size_t step = tileSize.x / 2;

		std::vector<size_t> tilesX;
		std::vector<size_t> tilesY;

		tilesX.resize(mapSize.x * mapSize.y);
		tilesY.resize(mapSize.x * mapSize.y);

		for (size_t i = 0; i < mapSize.x * mapSize.y; i++)
		{
			tilesX[i] = Random(0, 7);
			tilesY[i] = Random(0, 5);
		}

		while (window.Running())
		{
			fpsLimiter.Mark();

			fpsCounter.Start();

			while (window.GetEvent(report))
			{
				if (report.IsKeyPressed(KeyboardKey::W))
				{
					dy -= step;
				}

				if (report.IsKeyPressed(KeyboardKey::S))
				{
					dy += step;;
				}

				if (report.IsKeyPressed(KeyboardKey::A))
				{
					dx -= step;;
				}

				if (report.IsKeyPressed(KeyboardKey::D))
				{
					dx += step;;
				}

				if (report.Type == IsQuit)
				{
					window.StopEvent();
				}
			}

			render.Begin();

			render.Color(Color(0, 162, 232));
			render.Clear();

			size_t j = 0;

			for (size_t rows = 0; rows < mapSize.x; rows++)
			{
				for (size_t cols = 0; cols < mapSize.y; cols++)
				{
					size_t x = cols * tileSize.x / 2;
					size_t y = rows * tileSize.y;

					Vec2u pt = isometric.CartesianToIsometric(Vec2u(x, y));

					size_t tx = tileSize.x * tilesX[j];
					size_t ty = tileSize.y * tilesY[j];
					j++;

					render.Draw(&image, Vec2u(start.x + pt.x + dx, start.y + pt.y + dy), Vec2u(tx, ty), tileSize);
				}
			}

			render.End();

			fpsLimiter.Throttle();

			if (fpsCounter.Calc())
			{
				window.Title(convert.Convert(fpsCounter.Fps()));
				fpsCounter.Clear();
			}

			window.PollEvents();
		}
	}
	catch (const RuntimeError& error)
	{
		std::cout << error.what() << '\n';
	}

	return 0;
}