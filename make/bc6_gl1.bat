bcc32 -w-8027 -O2 -I..\LDL\include -DLDL_SUPPORT_OPENGL1 -ebc6_gl1_%1.exe ..\LDL\source\*.cpp ..\LDL\source\OpenGL\*.cpp ..\LDL\source\Renders\*.cpp ..\LDL\source\Platform\Windows\*.cpp %2%1.cpp

del *.obj
del *.tds