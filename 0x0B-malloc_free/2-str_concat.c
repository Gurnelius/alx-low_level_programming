#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	unsigned int 1,j = 0;
	char *str;
	
	if (s1 == NULL)
		s1[0] = '\0';

	if (s2 == NULL)
		s2[0] = '\0';

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++
				
	str = malloc(sizeof(char) * (j+i)+1)

	if (str == NULL)
	{
		return (NULL);
	}

	return (str);
}
