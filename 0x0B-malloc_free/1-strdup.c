#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *str_copy;
	unsigned int j = 0;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	str_copy = malloc(sizeof(char) * i + 1);

	if (str_copy == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		str_copy[j] = str[j];
	}

	return (str_copy);
}
