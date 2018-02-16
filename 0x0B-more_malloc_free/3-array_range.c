#include "holberton.h"
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	ar = malloc((max - min) * sizeof(int) + 1);
	if (ar == 0)
                return (NULL);
	if (min > max)
		return (NULL);
	for (i = 0; min <= max; min++)
	{
		ar[i] = min;
		i++;
	}
	return (ar);
}
