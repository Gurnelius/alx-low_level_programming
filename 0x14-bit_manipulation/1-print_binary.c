#include "main.h"
#include <stdio.h>

/**
* print_binary -  prints the binary representation of a number.
* @n: number
*
* return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int shift;

	if (n == 0)
		printf("0");

	for (i = n, shift = 0; (i >>= 1) > 0; shift++)
		;

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
