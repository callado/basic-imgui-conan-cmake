set(exe_name ${CMAKE_PROJECT_NAME})

add_subdirectory(imgui)

add_executable(${exe_name} main.cpp)

target_link_libraries(${exe_name} 
PUBLIC 
  imgui_backend
)

# message("conan libs: " "${CONAN_LIBS}")

# Most Conan libraries don't come with .PDB files, so the linker issues warnings when in debug mode.
# To deactivate them, uncomment the following line: 
if(MSVC) 
  set_target_properties(${exe_name} PROPERTIES LINK_FLAGS "/ignore:4099")
endif()