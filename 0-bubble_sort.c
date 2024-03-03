#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	int swapped;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp
					swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
			break;
	}
}

