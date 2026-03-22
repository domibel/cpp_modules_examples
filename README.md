# C++ Modules Examples

All this is experimental.

C++20 added the module system (`import`, `export module`).
C++23 added `import std;`

You need at least CMake 4.1, the Ninja Generator and GCC 15+ or Clang 19+

## Examples

| Example | Description | C++ |
|---|---|---|
| example1_import_std | `import std;` | 23 |
| example2_import_glm | importing a third-party module | 20 |
| example3_import_custom | writing your own module | 20 |
| example4_import_vulkan | importing a third-party module with partitions | 23 |

## Install dependencies

```bash
# all examples
sudo apt install cmake ninja-build

# GCC
sudo apt install g++

# Clang
sudo apt install clang libc++-dev

# example2 import glm
sudo apt install libglm-dev

# example4 import vulkan
sudo apt install libvulkan-dev
```

## Build

```bash
# GCC
cmake -B build -S example -G Ninja && cmake --build build

# Clang
CC=clang CXX=clang++ cmake -B build -S example -G Ninja && cmake --build build

# run
./build/hello
```

## Check which packages contain .cppm files

https://packages.debian.org/search?searchon=contents&keywords=cppm&mode=path&suite=testing&arch=amd64


## Interesting Tracker for C++20 Modules Support

https://arewemodulesyet.org/
