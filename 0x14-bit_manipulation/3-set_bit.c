#include "main.h"

/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: pointer to decimal number
 * @index: index position of the bit to change, starting from 0
 * Return: 1 on success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1;

	temp <<= index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	(*n) = (*n) | temp;
	return (1);
}
