#include "sort.h"


/**
 * partition - Sorting helper function that partitions the array
 * using the Lomuto partition scheme.
 *
 * @array: Array to be sorted.
 * @lo: Low pointer.
 * @hi: High pointer.
 * @size: Length of array.
 *
 * Return: partition
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi], swap = 0;
	int i = lo - 1, j;

	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap = array[j];
			array[j] = array[i];
			array[i] = swap;
			if (j != i)
				print_array(array, size);
		}
	}
	swap = array[j];
	array[j] = array[i + 1];
	array[i + 1] = swap;
	if (j != i + 1)
		print_array(array, size);
	return (i + 1);
}


/**
 * q_s - Sorting helper function that will recursively call itself.
 *
 * @array: Array to be sorted.
 * @lo: Low pointer.
 * @hi: High pointer.
 * @size: Length of array.
 */
void q_s(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		q_s(array, lo, p - 1, size);
		q_s(array, p + 1, hi, size);
	}
}


/**
 * quick_sort - Sorts an array of integers
 * in ascending order using the Quick sort algorithm.
 *
 * @array: Array to be sorted.
 * @size: Length of array.
 */
void quick_sort(int *array, size_t size)
{
	q_s(array, 0, size - 1, size);
}
