cmake_minimum_required(VERSION 3.20.0)
project(learnOpenGL VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# include(CTest)
# enable_testing()

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
# include(conanbuildinfo.cmake)
conan_basic_setup()
# conan_set_find_paths()
# conan_include_build_modules()

add_subdirectory(sources)


# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
