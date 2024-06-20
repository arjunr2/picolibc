#!/bin/bash
#clang --target=x86_64 -g \
#      --sysroot=/home/arjun/Documents/research/picolibc/install/picolibc/x86_64-linux-gnu \
#      -isystem install/picolibc/x86_64-linux-gnu/include/ \
#      -isystem build/ \
#      hello_world.c -c -o hw.o
#
#ld --no-gc-sections -Linstall/picolibc/x86_64-linux-gnu/lib/ hw.o \
#    -Tbuild/picolibc.ld install/picolibc/x86_64-linux-gnu/lib/crt0.o \
#    -o hello_world.out -lc 

clang --sysroot=/home/arjun/Documents/research/picolibc/install/picolibc/wasm32-wasi-threads \
      -matomics -mbulk-memory -mmutable-globals -msign-ext -mexception-handling \
      -isystem install/picolibc/wasm32-wasi-threads/include/ \
      -isystem build/ \
      hello_world.c -c -o hw.o

wasm-ld --no-gc-sections -Linstall/picolibc/wasm32-wasi-threads/lib/ \
    --allow-undefined --shared-memory --export-memory --max-memory=131072 --warn-unresolved-symbols \
    --export=__heap_base --export=__heap_end --export=__data_end \
    install/picolibc/wasm32-wasi-threads/lib/crt0.o hw.o -lc -lm \
    /home/arjun/Documents/research/wasm/wali/llvm-project/build/lib/clang/18/lib/wasi/libclang_rt.builtins-wasm32.a \
    -o hello_world.wasm
wasm2wat --enable-threads hello_world.wasm -o hello_world.wat
