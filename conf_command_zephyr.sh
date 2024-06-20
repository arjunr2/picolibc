#!/bin/bash

source ../../wali_config.sh
picosys="/home/arjun/Documents/research/picolibc/install/picolibc/wasm32-wasi-threads"
cflags="--sysroot=$picosys -matomics -mbulk-memory -mmutable-globals -msign-ext -mexception-handling -fno-stack-protector -fno-common"

make clean
make -j6 CC=clang LD=wasm-ld MYCFLAGS="$cflags" MYLDFLAGS="--export=__heap_base --export=__data_end --export=__heap_end --allow-undefined --shared-memory --export-memory --max-memory=131072 --warn-unresolved-symbols -L$picosys/lib $picosys/lib/crt0.o /home/arjun/Documents/research/wasm/wali/llvm-project/build/lib/clang/18/lib/wasi/libclang_rt.builtins-wasm32.a -lc -lm"
AR="$WALI_AR rc" RANLIB=$WALI_RANLIB
wasm2wat --enable-threads lua -o l.wat
wat2wasm --enable-threads l.wat -o l.wasm
