#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	unsigned int i, j; 
	
	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	
	arr = malloc(sizeof(int *) * width);
	
	for (i = 0; i < 5; i++)
		arr[i] = malloc(sizeof(int *) * height);
  
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
