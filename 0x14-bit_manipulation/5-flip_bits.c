#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number into another
 * @n: decimal number
 * @m: decimal number
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	int i = 0;

	temp = n ^ m;

	while (temp)
	{
		i++;
		temp &= (temp - 1);
	}

	return (i);
}
