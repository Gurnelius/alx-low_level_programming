#include "main.h"
#include <stdio.h>

/**
* get_bit - get the value of a bit at a given index.
* @n: number to get its bit
* @index: index of the bit
*
* Return: the value of the bit - 1 or 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);

	temp = n >> index;
	temp = temp & 1;

	return (temp);
}
