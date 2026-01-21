# C++ Modules Examples

All this is experimental.

You need at least CMake 4.1 the Ninja Generator and GCC 15+ or Clang 19+
  
```bash
sudo apt install cmake ninja-build g++ clang libc++-dev
```

```bash
# GCC
cmake -B build -S example -G Ninja && cmake --build build

# Clang
CC=clang CXX=clang++ cmake -B build -S example -G Ninja && cmake --build build

# run
./build/hello
```

# Check which packages contain .cppm files

https://packages.debian.org/search?searchon=contents&keywords=cppm&mode=path&suite=testing&arch=amd64


# Interesting Tracker for C++20 Modules Support

https://arewemodulesyet.org/
