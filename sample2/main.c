// gcc main.c sum.c -o main

// make clean
// make all
// make run

#include <stdio.h>
#include "sum.h"

int main()
{
	printf("1 + 2 = %d\n", sum(1, 2));
	return 0;
}
