add_library(imgui_backend
  imgui_impl_glfw.cpp
  imgui_impl_opengl3.cpp)

target_include_directories(imgui_backend PUBLIC include)

conan_target_link_libraries(imgui_backend PUBLIC
  imgui::imgui 
  glfw::glfw)