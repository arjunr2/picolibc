#include <stdio.h>

#define LINUX_STDOUT 1
//#define SYS_WRITE 1
//
//static __inline long __syscall0(long n)
//{
//	unsigned long ret;
//	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n) : "rcx", "r11", "memory");
//	return ret;
//}
//
//static __inline long __syscall1(long n, long a1)
//{
//	unsigned long ret;
//	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1) : "rcx", "r11", "memory");
//	return ret;
//}
//
//static __inline long __syscall2(long n, long a1, long a2)
//{
//	unsigned long ret;
//	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2)
//						  : "rcx", "r11", "memory");
//	return ret;
//}
//
//static __inline long __syscall3(long n, long a1, long a2, long a3)
//{
//	unsigned long ret;
//	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2),
//						  "d"(a3) : "rcx", "r11", "memory");
//	return ret;
//}
//
//static __inline long __syscall4(long n, long a1, long a2, long a3, long a4)
//{
//	unsigned long ret;
//	register long r10 __asm__("r10") = a4;
//	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2),
//						  "d"(a3), "r"(r10): "rcx", "r11", "memory");
//	return ret;
//}
//
//static __inline long __syscall5(long n, long a1, long a2, long a3, long a4, long a5)
//{
//	unsigned long ret;
//	register long r10 __asm__("r10") = a4;
//	register long r8 __asm__("r8") = a5;
//	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2),
//						  "d"(a3), "r"(r10), "r"(r8) : "rcx", "r11", "memory");
//	return ret;
//}
//
//static __inline long __syscall6(long n, long a1, long a2, long a3, long a4, long a5, long a6)
//{
//	unsigned long ret;
//	register long r10 __asm__("r10") = a4;
//	register long r8 __asm__("r8") = a5;
//	register long r9 __asm__("r9") = a6;
//	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2),
//						  "d"(a3), "r"(r10), "r"(r8), "r"(r9) : "rcx", "r11", "memory");
//	return ret;
//}



long __syscall_SYS_write(int a1, int a2, int a3) __attribute__ ((
  __import_module__("wali"),
  __import_name__("SYS_write")
));

static int
picolibc_putc(char c, FILE *file) {
  __syscall_SYS_write(LINUX_STDOUT, (int)&c, 1);
  return 0;
}

int k = 4;
static FILE __stdout = FDEV_SETUP_STREAM(picolibc_putc, NULL, NULL, _FDEV_SETUP_WRITE);
FILE *const stdout = &__stdout;

int main() {
  char c = 'A';  //+ __stdout.flags;
  __syscall_SYS_write(LINUX_STDOUT, (int)&c, 1);
  c += 5;
  printf("Hello World\n");
  return 0;
}
