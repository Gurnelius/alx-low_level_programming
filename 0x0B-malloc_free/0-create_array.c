#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = malloc(sizeof(c) * size);

	if (buffer == NULL)
		return (NULL);

	buffer[0] = c;
	
	return buffer;
}
