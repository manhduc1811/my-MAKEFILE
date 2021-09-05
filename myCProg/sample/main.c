// gcc main.c sum.c -o main

#include <stdio.h>
#include "sum.h"

int main()
{
	printf("1 + 2 = %d\n", sum(1, 2));
	return 0;
}
