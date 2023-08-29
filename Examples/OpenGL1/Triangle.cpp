#include <LDL/Core/RuntimeError.hpp>
#include <LDL/Loaders/ImageLoader.hpp>
#include <LDL/Time/FpsCounter.hpp>
#include <LDL/Core/NumberToString.hpp>
#include <LDL/Time/FpsLimiter.hpp>
#include <LDL/Allocators/FixedLinear.hpp>
#include <LDL/Graphics/Window.hpp>
#include <LDL/Graphics/Render.hpp>
#include <LDL/OpenGL/OpenGL1_2.hpp>
#include <iostream>

using namespace LDL::Graphics;
using namespace LDL::Enums;
using namespace LDL::Events;
using namespace LDL::Time;
using namespace LDL::Core;
using namespace LDL::Allocators;
using namespace LDL::Loaders;
using namespace LDL::Math;

void Identity()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void Display() 
{
	Identity();

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0); glVertex3f(-0.6f, -0.75f, 0.5f);
	glColor3f(0, 1, 0); glVertex3f(0.6f, -0.75f, 0.0f);
	glColor3f(0, 0, 1); glVertex3f(0.0f, 0.75f, 0.0f);
	glEnd();
}

int main()
{
	try
	{
		RenderContext renderContext(RenderMode::OpenGL1);

		Window window(&renderContext, Vec2u(0, 0), Vec2u(800, 600), "Window!");
		Render render(&renderContext, &window);

		Event report;

		FpsCounter fpsCounter;
		NumberToString convert;
		FpsLimiter fpsLimiter;

		while (window.Running())
		{
			fpsLimiter.Mark();
			fpsCounter.Start();

			while (window.GetEvent(report))
			{
				if (report.Type == IsQuit)
				{
					window.StopEvent();
				}

				if (report.IsKeyPressed(KeyboardKey::Escape))
					window.StopEvent();
			}

			render.Begin();

			Display();

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