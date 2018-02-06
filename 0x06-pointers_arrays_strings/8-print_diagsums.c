#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: pointer to a first element of the array of the inegers a
 * @size: size of the array
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int count;
	int count1;

	count = 0;
	count1 = 0;
	for (i = 0; i < size * size; i += (size + 1))
	{
		count = count + a[i];
	}
	printf("%d, ", count);
	for (i = (size - 1); i <= size * (size - 1); i += (size - 1))
	{
		count1 = count1 + a[i];
	}
	printf("%d\n", count1);
}
