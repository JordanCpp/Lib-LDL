call "C:\Downloads\codeblocks-12.11mingw-setup\MinGW\mingwvars.bat"

g++ -Wall -Wextra -Werror -pedantic-errors -o mingw_soft_%1.exe -O2 -s ..\LDL\source\*.cpp ..\LDL\source\OpenGL\*.cpp ..\LDL\source\Renders\*.cpp ..\LDL\source\Platform\Windows\*.cpp %2%1.cpp -I..\LDL\include -DLDL_SUPPORT_SOFTWARE -lgdi32 -lopengl32 -lwinmm