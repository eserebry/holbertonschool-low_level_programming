#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: array to sort
 * @size:  size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int array_tmp = 0;

	if (size > 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					array_tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = array_tmp;
					print_array(array, size);
				}
			}
		}
	}
}
