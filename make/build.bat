@echo off

set pth=..\examples\

call %1 01Window %pth%
call %1 02Render %pth%
call %1 03Fps    %pth%
call %1 04Clear  %pth%
call %1 05Img    %pth%