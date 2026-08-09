# ProjectCPP

This is a simple C++ project built with CMake.

## Build Instructions

### Quick step-by-step

```powershell
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
cmake --build . 
cmake --build build (option 2)

# Install library for compiler : gtest will be installed in system of compiler and not needed install 
# third party library
# open MSYS2 UCRT64
# pacman -S mingw-w64-ucrt-x86_64-gtest
.\ProjectCPP.exe
```
## build using g++ compiler commend
g++ main.cpp -o main.exe