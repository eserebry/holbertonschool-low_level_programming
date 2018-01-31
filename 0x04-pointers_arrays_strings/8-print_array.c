#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: pointer to the first element of array of integers.
 * @n: number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	while (i <  n)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
}
