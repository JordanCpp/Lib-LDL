call "C:\VC6\Microsoft Visual Studio\VC98\Bin\VCVARS32.BAT"

cl /O2 -Fevc6_soft_%1.exe ..\LDL\source\*.cpp ..\LDL\source\OpenGL\*.cpp ..\LDL\source\Renders\*.cpp ..\LDL\source\Platform\Windows\*.cpp %2%1.cpp /I..\LDL\include /DLDL_SUPPORT_SOFTWARE /link gdi32.lib winmm.lib user32.lib opengl32.lib

del *.obj