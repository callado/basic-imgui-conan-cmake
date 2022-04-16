# Basic Dear ImGui, Conan and CMake setup

This project contains a basic setup for a C++20 application using [Dear ImGui](https://github.com/ocornut/imgui) to create the user interface, [Conan](https://conan.io) as a package manager and [CMake](https://cmake.org/) as build system.

The source code itself is simply the ImGui example using GLFW and OpenGL, available at https://github.com/ocornut/imgui/tree/master/examples/example_glfw_opengl3.
Any of the [ImGui examples](https://github.com/ocornut/imgui/tree/master/examples) with different configurations can be substituted in the `sources/imgui` folder. Just remember to change the `CMakeLists.txt` and `conanfile.txt` accordingly.

## Building

Make sure you have Conan and CMake installed before starting.

Clone the repository. Then, from the command-line at the project's root folder:

1. Create a build folder and `cd` into it:
```bash
  $ mkdir build && cd build 
```

2. Install the dependencies using Conan for the preferred build configuration:
```bash
  $ conan install .. -s build_type=<build_config>
```
`<build_config>` can be, for example, `Debug` or `Release`.

3. Build using Cmake:
```bash
  (windows)
  $ cmake ..
  $ cmake --build . --config <build_config>

  (linux/mac)
  $ cmake .. -DCMAKE_BUILD_TYPE=<build_config>
  $ cmake --build .
```
