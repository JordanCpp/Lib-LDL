cmake_minimum_required(VERSION 3.8)

add_executable(IntegerToString "IntegerToString.cpp")
target_link_libraries(IntegerToString LDL)

add_executable(Directory "Directory.cpp")
target_link_libraries(Directory LDL)