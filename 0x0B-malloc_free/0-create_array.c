#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = malloc(sizeof(c) * size);

	if (b == NULL)
		return (NULL);
	for(int i = 0; i < size; i++)
	{
		b[i] = c;
	}
	
	return (b);
}
