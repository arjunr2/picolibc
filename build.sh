#!/bin/bash
rm -rf build install
mkdir -p build
cd build
#../scripts/do-x86_64-configure -Dprefix=/home/arjun/Documents/research/picolibc/install #-Dtinystdio=false
../scripts/do-clang-wasm32-configure -Dprefix=/home/arjun/Documents/research/picolibc/install -Db_asneeded=false -Db_lundef=false
ninja -v  | tee log.log
ninja install
