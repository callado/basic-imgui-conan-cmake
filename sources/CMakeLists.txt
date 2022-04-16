set(exe_name ${CMAKE_PROJECT_NAME})

add_subdirectory(imgui)

add_executable(${exe_name} main.cpp)
# find_package(glfw REQUIRED)


target_link_libraries(${exe_name} 
PUBLIC 
  imgui_backend
PRIVATE
  fmtd
)

# message("conan libs: " "${CONAN_LIBS}")

set_target_properties(${exe_name} PROPERTIES LINK_FLAGS "/ignore:4099")