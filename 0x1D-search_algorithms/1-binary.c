#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value:  value to search for
 *
 * Return: first index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t med, low, high;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		med = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i <  high)
				printf(", ");
			else
				printf("\n");
		}
		if (value == array[med])
			return (med);
		if (value > array[med])
		{
			low  = med + 1;
		}
		else
			high = med - 1;
	}
	return (-1);
}
