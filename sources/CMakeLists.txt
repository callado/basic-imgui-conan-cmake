set(exe_name ${CMAKE_PROJECT_NAME})

add_subdirectory(imgui)

add_executable(${exe_name} main.cpp)
# find_package(glfw REQUIRED)


conan_target_link_libraries(${exe_name} 
PUBLIC 
  imgui_backend
PRIVATE
  ${CONAN_LIBS}
)

# message("conanlibs: " "${CONAN_LIBS}")
# target_link_libraries(${exe_name} )

# conan_target_link_libraries(${exe_name}
# PUBLIC 
#   imgui_backend
# PRIVATE
#   fmt::fmt)

set_target_properties(${exe_name} PROPERTIES LINK_FLAGS "/ignore:4099")