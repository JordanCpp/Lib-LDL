
file(GLOB SOURCE_FILES "*.cpp")
add_executable(Fallout ${SOURCE_FILES})
target_link_libraries(Fallout LDL)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/data DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)