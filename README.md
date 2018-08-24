# non-recursive-make
c project template based on autoconf and automake with non-recursive make approach

# quick start guide
1. git clone https://github.com/hutualive/non-recursive-make.git
2. cd non-recursive-make
3. autoreconf --install

* for release build
4. mkdir build && cd build
5. ../configure
6. make
7. ./hello

* or debug build
4. cd debug
5. ./debug_configure
6. make
7. ./hello

# notes
* refer to debug/common_flags.sh and debug_configure to modify the CCFLAGS and CPPFLAGS as you need, for release build, such flag just leave to autotools to manage

# reference
* https://www.dwheeler.com/autotools/
