add_definitions(-DLDL_SUPPORT_OPENGL1)

add_executable(01_GL1_ScreenColor "01_GL1_ScreenColor.cpp")
target_link_libraries(01_GL1_ScreenColor LDL)