#include "GpuRenderImpl.hpp"
#include "GpuUtil.hpp"

using namespace LDL::Graphics;

GpuRenderImpl::GpuRenderImpl(GpuWindow* window) :
	_Window(window),
	_BaseRender(_Window->View()),
	_Screen(_BaseRender.Size())
{
	GL_CHECK(glViewport(0, 0, (GLsizei)_BaseRender.Size().PosX(), (GLsizei)_BaseRender.Size().PosY()));

	GL_CHECK(glMatrixMode(GL_PROJECTION));
	GL_CHECK(glLoadIdentity());

	GL_CHECK(glOrtho(0.0f, (GLdouble)_BaseRender.Size().PosX(), (GLdouble)_BaseRender.Size().PosY(), 0.0f, 0.0f, 1.0f));

	GL_CHECK(glMatrixMode(GL_MODELVIEW));
	GL_CHECK(glLoadIdentity());

	GL_CHECK(glEnable(GL_BLEND));
	GL_CHECK(glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA));
}

void LDL::Graphics::GpuRenderImpl::Screen(uint8_t* dst)
{
	GL_CHECK(glReadPixels(0, 0, (GLsizei)_BaseRender.Size().PosX(), (GLsizei)_BaseRender.Size().PosY(), GL_RGBA, GL_UNSIGNED_BYTE, dst));
}

void GpuRenderImpl::Begin()
{
}

void GpuRenderImpl::End()
{
	_Window->Present();
}

const Point2u& GpuRenderImpl::Size()
{
	return _BaseRender.Size();
}

const Color& GpuRenderImpl::Color()
{
	return _BaseRender.Color();
}

void GpuRenderImpl::Clear()
{
	GLclampf r;
	GLclampf g;
	GLclampf b;

	GpuUtil::Normalize(_BaseRender.Color(), r, g, b);

	GL_CHECK(glClearColor(r, g, b, 1.0f));
	GL_CHECK(glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT));
}

void GpuRenderImpl::Color(const LDL::Graphics::Color& color)
{
	_BaseRender.Color(color);
}

void GpuRenderImpl::Pixel(const Point2u& pos)
{
	GLclampf r;
	GLclampf g;
	GLclampf b;

	GpuUtil::Normalize(_BaseRender.Color(), r, g, b);

	glBegin(GL_POINTS);
	glColor3f(r, g, b);
	glVertex2i((GLint)pos.PosX(), (GLint)pos.PosY());
	glEnd();
}

void GpuRenderImpl::Line(const Point2u& pos1, const Point2u& pos2)
{
	GLclampf r;
	GLclampf g;
	GLclampf b;

	GpuUtil::Normalize(_BaseRender.Color(), r, g, b);

	GLint x1 = (GLint)pos1.PosX();
	GLint y1 = (GLint)pos1.PosY();
	GLint x2 = (GLint)pos2.PosX();
	GLint y2 = (GLint)pos2.PosY();

	glBegin(GL_LINES);
	glColor3f(r, g, b);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glEnd();
}

void GpuRenderImpl::Fill(const Point2u& pos, const Point2u& size)
{
	GLclampf r;
	GLclampf g;
	GLclampf b;

	GpuUtil::Normalize(_BaseRender.Color(), r, g, b);

	GLint x = (GLint)pos.PosX();
	GLint y = (GLint)pos.PosY();
	GLint w = (GLint)size.PosX();
	GLint h = (GLint)size.PosY();

	glBegin(GL_QUADS);
	glColor3f(r, g, b);
	glVertex2i(x, y + h);
	glVertex2i(x, y);
	glVertex2i(x + w, y);
	glVertex2i(x + w, y + h);
	glEnd();
}

void GpuRenderImpl::Draw(GpuImage* image, const Point2u& pos, const Point2u& size)
{
	GL_CHECK(glEnable(GL_TEXTURE_2D));

	GL_CHECK(glBindTexture(GL_TEXTURE_2D, (GLuint)image->Id()));

	GpuUtil::DrawQuad(pos, size);

	GL_CHECK(glDisable(GL_TEXTURE_2D));
}

void GpuRenderImpl::Draw(GpuImage* image, const Point2u& pos)
{
	Draw(image, pos, image->Size());
}

void GpuRenderImpl::Draw(CpuImage* image, const Point2u& pos, const Point2u& size)
{
	_Screen.Draw(image, pos, size);
}

void GpuRenderImpl::Draw(CpuImage* image, const Point2u& pos)
{
	_Screen.Draw(image, pos);
}

void GpuRenderImpl::Draw(GpuImage* image, const Point2u& dstPos, const Point2u& srcPos, const Point2u& srcSize)
{
	GL_CHECK(glEnable(GL_TEXTURE_2D));

	GL_CHECK(glBindTexture(GL_TEXTURE_2D, (GLuint)image->Id()));

	GpuUtil::DrawQuad(dstPos, image->Size(), srcPos, srcSize);

	GL_CHECK(glDisable(GL_TEXTURE_2D));
}