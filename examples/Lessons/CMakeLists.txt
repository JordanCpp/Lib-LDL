add_executable(01Window "01Window.cpp")
target_link_libraries(01Window LDL)

add_executable(02Render "02Render.cpp")
target_link_libraries(02Render LDL)

add_executable(03Fps "03Fps.cpp")
target_link_libraries(03Fps LDL)

add_executable(04Clear "04Clear.cpp")
target_link_libraries(04Clear LDL)

add_executable(05Img "05Img.cpp")
target_link_libraries(05Img LDL)

add_executable(06Surf "06Surf.cpp")
target_link_libraries(06Surf LDL)

add_executable(07Move "07Move.cpp")
target_link_libraries(07Move LDL)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/img24.bmp DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)