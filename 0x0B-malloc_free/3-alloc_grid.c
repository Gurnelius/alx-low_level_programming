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
<<<<<<< HEAD
	int **gridout;
=======
	int **arr;
>>>>>>> bb3c3b13ac484bc1c84059422d684119d78da709
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
<<<<<<< HEAD

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
=======
	}
	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
>>>>>>> bb3c3b13ac484bc1c84059422d684119d78da709
	{
		free(gridout);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);

<<<<<<< HEAD
	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridout[i]);
			free(gridout);
=======
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
>>>>>>> bb3c3b13ac484bc1c84059422d684119d78da709
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
<<<<<<< HEAD
			gridout[i][j] = 0;

	return (gridout);
=======
			arr[i][j] = 0;

	if (arr == NULL)
		return (NULL);
	return (arr);
>>>>>>> bb3c3b13ac484bc1c84059422d684119d78da709
}
