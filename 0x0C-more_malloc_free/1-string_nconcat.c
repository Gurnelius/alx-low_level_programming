#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from 2nd string
 *
 * Return: pointer to combined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s1[i] != '\0')
	{
		size++;
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		size++;
		j++;
	}
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
