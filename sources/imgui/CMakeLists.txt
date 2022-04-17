add_library(imgui_backend
  imgui_impl_glfw.cpp
  imgui_impl_opengl3.cpp)

target_include_directories(imgui_backend PUBLIC include)

set(imgui_libs "imgui" "glfw3")
if(WIN32)
  list(APPEND imgui_libs "opengl32")
  elseif(UNIX AND NOT APPLE)
    list(APPEND imgui_libs "GL" "X11" "dl" "pthread" "Xi" "Xrandr")
endif() 
target_link_libraries(imgui_backend PUBLIC ${imgui_libs})