@echo off

set pth=..\..\examples\Lessons\

call %1 01Window %pth%
call %1 02Render %pth%
call %1 03Fps    %pth%
call %1 04Clear  %pth%
call %1 05Img    %pth%
call %1 06Surf   %pth%
call %1 07Move   %pth%

set pth=..\..\examples\OpenGL1\

call %1 01_GL1_ScreenColor %pth%

set pth=..\..\examples\OpenGL3\

call %1 01_GL3_Triangle %pth%