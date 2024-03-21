bcc32 -w-8027 -O2 -I..\LDL\include -DLDL_SUPPORT_SOFTWARE -ebc6_soft_%1.exe ..\LDL\source\*.cpp ..\LDL\source\OpenGL\*.cpp ..\LDL\source\Renders\*.cpp ..\LDL\source\Platform\Windows\*.cpp %2%1.cpp

del *.obj
del *.tds