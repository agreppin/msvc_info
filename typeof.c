#include <stdio.h>

int main(int argc, char **argv)
{
	__typeof__(argc) x = argc;
	printf("Hello, worldi%d!\n", x);
	return 0;
}
