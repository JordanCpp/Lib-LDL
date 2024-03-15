/*
Boost Software License - Version 1.0 - August 17th, 2003

Permission is hereby granted, free of charge, to any person or organization
obtaining a copy of the software and accompanying documentation covered by
this license (the "Software") to use, reproduce, display, distribute,
execute, and transmit the Software, and to prepare derivative works of the
Software, and to permit third-parties to whom the Software is furnished to
do so, all subject to the following:

The copyright notices in the Software and this entire statement, including
the above license grant, this restriction and the following disclaimer,
must be included in all copies of the Software, in whole or in part, and
all derivative works of the Software, unless such copies or derivative
works are solely in the form of machine-executable object code generated by
a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#include <LDL/Windows/GL3Win.hpp>

typedef HGLRC(WINAPI* PFNWGLCREATECONTEXT)(HDC);
typedef BOOL(WINAPI* PFNWGLMAKECURRENT)(HDC, HGLRC);
typedef BOOL(WINAPI* PFNWGLDELETECONTEXT)(HGLRC);

typedef HGLRC(WINAPI* PFNWGLCREATECONTEXTATTRIBSARBPROC)(HDC hDC, HGLRC hShareContext, const int* attribList);

#define WGL_CONTEXT_MAJOR_VERSION_ARB             0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB             0x2092  
#define WGL_CONTEXT_FLAGS_ARB                     0x2094 
#define WGL_CONTEXT_PROFILE_MASK_ARB              0x9126  
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB    0x00000002 
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB          0x00000001
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002


LDL_WindowOpenGL3::LDL_WindowOpenGL3(LDL_Result* result, const LDL_Vec2i& pos, const LDL_Vec2i& size, const char* title, int mode) :
	_Result(result),
	_MainWindow(result, pos, size, title, mode),
	_HGLRC(NULL)
{
	int attribs[] =
	{
		WGL_CONTEXT_MAJOR_VERSION_ARB, 3,
		WGL_CONTEXT_MINOR_VERSION_ARB, 3,
		WGL_CONTEXT_FLAGS_ARB,         WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB,
		WGL_CONTEXT_PROFILE_MASK_ARB,  WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
		0
	};

	PIXELFORMATDESCRIPTOR pfd;

	ZeroMemory(&pfd, sizeof(PIXELFORMATDESCRIPTOR));

	_MainWindow._HDC = GetDC(_MainWindow._HWND);

	if (_MainWindow._HDC == NULL)
	{
		_Result->Message("GetDC failed");
		return;
	}

	pfd.nSize = sizeof(pfd);
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 32;
	pfd.cDepthBits = 24;

	int format = ChoosePixelFormat(_MainWindow._HDC, &pfd);

	if (format == 0)
	{
		_Result->Message("ChoosePixelFormat failed");
		return;
	}

	if (!SetPixelFormat(_MainWindow._HDC, format, &pfd))
	{
		_Result->Message("SetPixelFormat failed");
		return;
	}

	_HGLRC = wglCreateContext(_MainWindow._HDC);

	if (!_HGLRC)
	{
		_Result->Message("wglCreateContext failed");
		return;
	}

	if (!wglMakeCurrent(_MainWindow._HDC, _HGLRC))
	{
		_Result->Message("wglMakeCurrent failed");
		return;
	}

	PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)wglGetProcAddress("wglCreateContextAttribsARB");

	if (!wglCreateContextAttribsARB)
	{
		_Result->Message("wglGetProcAddress failed");
		return;
	}

	if (!wglMakeCurrent(NULL, NULL))
	{
		_Result->Message("wglMakeCurrent failed");
		return;
	}

	if (!wglDeleteContext(_HGLRC))
	{
		_Result->Message("wglDeleteContext failed");
		return;
	}

	_HGLRC = wglCreateContextAttribsARB(_MainWindow._HDC, 0, attribs);

	if (!_HGLRC)
	{
		_Result->Message("wglCreateContextAttribsARB failed");
		return;
	}

	if (!wglMakeCurrent(_MainWindow._HDC, _HGLRC))
	{
		_Result->Message("wglMakeCurrent failed");
		return;
	}
}

LDL_WindowOpenGL3::~LDL_WindowOpenGL3()
{
	wglMakeCurrent(NULL, NULL);
	wglDeleteContext(_HGLRC);
}

bool LDL_WindowOpenGL3::Running()
{
	return _MainWindow.Running();
}

void LDL_WindowOpenGL3::Present()
{
	if (!SwapBuffers(_MainWindow._HDC))
	{
		_Result->Message("SwapBuffers failed");
	}

	Update();
}

void LDL_WindowOpenGL3::PollEvents()
{
	_MainWindow.PollEvents();
}

const LDL_Vec2i& LDL_WindowOpenGL3::Size()
{
	return _MainWindow.Size();
}

const LDL_Vec2i& LDL_WindowOpenGL3::Pos()
{
	return _MainWindow.Pos();
}

bool LDL_WindowOpenGL3::GetEvent(LDL_Event& event)
{
	return _MainWindow.GetEvent(event);
}

bool LDL_WindowOpenGL3::WaitEvent(LDL_Event& event)
{
	return _MainWindow.WaitEvent(event);
}

void LDL_WindowOpenGL3::StopEvent()
{
	_MainWindow.StopEvent();
}

const char* LDL_WindowOpenGL3::Title()
{
	return _MainWindow.Title();
}

void LDL_WindowOpenGL3::Title(const char* title)
{
	_MainWindow.Title(title);
}

void* LDL_WindowOpenGL3::NativeHandle()
{
	return _MainWindow._HWND;
}

void LDL_WindowOpenGL3::Update()
{
	_MainWindow.Update();
}