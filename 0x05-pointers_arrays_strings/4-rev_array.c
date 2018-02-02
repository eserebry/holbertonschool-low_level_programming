#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: pointer to a first elemnt of the array a
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n--;
	while (n > i)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
		i++;
	}
}
