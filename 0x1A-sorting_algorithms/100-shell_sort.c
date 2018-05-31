#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 *
 * @array: array to be sorted
 * @size: size of the array to be sorted
 *
 */
void shell_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t k;
	int value;

	for (i = size / 2; i > 0; i /= 2)
	{
		for (j = i; j < size; j++)
		{
			value = array[j];
			for (k = j; k >= i; k -= i)
			{
				if (value < array[k - i])
					array[k] = array[k - i];
				else
					break;
			}
			array[k] = value;
			print_array(array, size);
		}
	}
}
