#include <stdio.h>
#include "main.h"
/**
* binary_to_uint - convert binary number to
* unsigned integer.
*
* @b: pointer to string of 1 and 0 chars
*
* Return: unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int base = 1;
	int result = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (len)
	{
		result += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}
	return (result);
}
