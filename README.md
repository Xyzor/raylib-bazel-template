Basic C++ template for a quick project setup.  

## Included tools:
- GoogleTest
- Bazel
- Raylib - *example dependency*

## Prerequisites
1. Install C++ toolchain (Installed Microsoft Visual Studio 2022)
2. Install Bazel *(I downloaded the .exe and moved it to a folder that is part of the PATH environment variable)*

## How it works

compile & run the application:

`bazel run src:main`

compile & run tests:

`bazel run test:all`

## VSCode Tips (optional)

### Extensions
- C/C++
- Bazel  
  *For better integration you can install the Buildifier tool (I downloaded the .exe and moved it next to bazel.exe)*

## Resources

- [GoogleTest](https://google.github.io/googletest/)
- [Bazel](https://bazel.build/)
- [Raylib](https://www.raylib.com/)
- [Microsoft Visual Studio](https://visualstudio.microsoft.com/vs/)
- Buildifier - Better to get it from the Extension's readme