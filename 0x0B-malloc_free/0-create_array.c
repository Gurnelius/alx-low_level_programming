#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
        
	char *buffer;

	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
		return (NULL);

	buffer[0] = c;
	
	return buffer;
}
