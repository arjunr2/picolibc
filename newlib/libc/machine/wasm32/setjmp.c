#include <setjmp.h>
#include <stdio.h>

int setjmp (jmp_buf __jmpb) {
  return 0;
}

void longjmp(jmp_buf buf, int val) {
  printf("CALLING LONGJMP\n");
}

