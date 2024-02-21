#include "sort.h"

/**
 * bubble_sort - Sort an array using bubble sort
 * algorithm.
 *
 * @array: pointer to an integer array.
 * @size: size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t temp, i, j, swapped;

	for (j = 0; j < size - 1; j++)
	{
		swapped = 0;
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
