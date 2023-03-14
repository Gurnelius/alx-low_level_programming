#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *str;
	
	if (s1 == NULL || s2 == NULL)
	{
		s1[0] = '\0';
		s2[0] = '\0';
	}

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;
				
	str = malloc(sizeof(char) * (j+i)+1);

	if (str == NULL)
	{
		return (NULL);
	}
	
	j = 0;
	i = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	return (str);
}
