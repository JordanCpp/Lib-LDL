cmake_minimum_required(VERSION 3.8)

add_executable(Display "Display.cpp")
target_link_libraries(Display LDL)

add_executable(Mouse "Mouse.cpp")
target_link_libraries(Mouse LDL)