# Basic Dear ImGui, Conan and CMake setup

This project contains a basic setup for an OpenGL scene, using [Dear ImGui](https://github.com/ocornut/imgui) with GLFW3 to create windows and the UI, [Conan](https://conan.io) as a package manager and [CMake](https://cmake.org/) as build system.

## Building

Make sure you have Conan and CMake installed. From the command-line:
1. create a build folder and `cd` into it:
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
