#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *str_copy;
	
	if (str == NULL)
		return (NULL);
	str_copy = malloc(sizeof(str));

	if (str_copy == NULL)
		return (NULL);

	return (str_copy);
}
