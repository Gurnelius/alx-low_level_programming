#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 1 or 0
 */
}

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	if (*byte_ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
