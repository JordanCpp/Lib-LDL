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

#ifndef LDL_Windows_MainWin_hpp
#define LDL_Windows_MainWin_hpp

#include <LDL/BaseWin.hpp>
#include <LDL/Result.hpp>
#include <LDL/Events.hpp>
#include <LDL/Declare.hpp>

class LDL_MainWindow
{
public:
	LDL_MainWindow(LDL_Result* result, const LDL_Vec2i& pos, const LDL_Vec2i& size, const char* title, int mode);
	~LDL_MainWindow();
	void Update();
	uint8_t ConvertKey(size_t key);
	LRESULT CALLBACK Handler(UINT Message, WPARAM WParam, LPARAM LParam);
	static LRESULT CALLBACK WndProc(HWND Hwnd, UINT Message, WPARAM WParam, LPARAM LParam);
	bool InitHinstance();
	bool InitWndClass();
	bool InitStyle();
	bool InitAdjustRect();
	bool InitHwnd();
	bool InitHdc();
	bool Running();
	void PollEvents();
	bool GetEvent(LDL_Event& event);
	bool WaitEvent(LDL_Event& event);
	void StopEvent();
	void Title(const char* title);
	const char* Title();
	const LDL_Vec2i& Size();
	const LDL_Vec2i& Pos();
private:
	LDL_Result* _Result;
	LDL_BaseWindow _BaseWindow;
	LDL_Eventer    _Eventer;
public:
	WNDCLASS       _WNDCLASS;
	HINSTANCE      _HINSTANCE;
	MSG            _MSG;
	ATOM           _ATOM;
	DWORD          _Style;
	RECT           _Rect;
	HWND           _HWND;
	HDC            _HDC;
};

#endif