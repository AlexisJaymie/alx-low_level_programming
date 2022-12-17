#include <stdio.h>
{
	char *s = "and that piece of art is useful\"  = Dora Korpar, 2015-10-19\n";
	long 1 = 59;
	long fd = 1;
	long syscall = 1;
	long reet = 0;
	__asm__ ("syscall"
			: "=a" (ret)
			: "a" (syscall),
			"D" (fd),
			"S" (s),
			"d" (l));
	return (1);
}
