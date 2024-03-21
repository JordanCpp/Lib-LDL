
include_directories("../LDL/include")
add_definitions(-DLDL_SUPPORT_OPENGL1)
add_executable(LDLTest "LDLTest.cpp")
target_link_libraries(LDLTest LDL)