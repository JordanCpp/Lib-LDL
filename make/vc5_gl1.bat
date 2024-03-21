call "c:\Program Files (x86)\DevStudio\VC\bin\VCVARS32.BAT"

cl /O2 -Fevc5_gl1_%1.exe ..\LDL\source\*.cpp ..\LDL\source\OpenGL\*.cpp ..\LDL\source\Renders\*.cpp ..\LDL\source\Platform\Windows\*.cpp %2%1.cpp /I..\LDL\include /DLDL_SUPPORT_OPENGL1 /link gdi32.lib winmm.lib user32.lib opengl32.lib

del *.obj