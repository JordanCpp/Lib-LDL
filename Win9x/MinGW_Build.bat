call "C:\Downloads\codeblocks-20.03mingw-nosetup\MinGW\mingwvars.bat"

g++ -Wall -Wextra -pedantic -O2 -std=c++98 -o MinGW_%1.exe -DLDL_RENDER_OPENGL1 ..\%2 ^
..\source\Allocators\*.cpp ^
..\source\Core\*.cpp ^
..\source\Events\*.cpp ^
..\source\Time\*.cpp ^
..\source\Platforms\Windows\Graphics\MainWindow.cpp ^
..\source\Platforms\Windows\Graphics\OpenGL1\*.cpp ^
..\source\Platforms\Windows\Time\Ticks.cpp ^
..\source\Platforms\Windows\Core\*.cpp ^
..\source\Platforms\Windows\Input\*.cpp ^
..\source\Graphics\*.cpp ^
..\source\Graphics\Base\*.cpp ^
..\source\Graphics\Software\Surface.cpp ^
..\source\Graphics\OpenGL1\*.cpp ^
..\source\Graphics\Primitives\*.cpp ^
..\source\Graphics\Utils\*.cpp ^
..\source\Loaders\*.cpp ^
..\source\OpenGL\*.cpp ^
-I..\include\ ^
-lgdi32 ^
-lopengl32 ^
-lwinmm ^
-static