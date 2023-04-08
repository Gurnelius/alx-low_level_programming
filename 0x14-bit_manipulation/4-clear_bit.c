#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number
 * @index: index position of the bit to change
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1;

	temp <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	(*n) = (*n) & ~(temp);

	return (1);
}
