#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: pointer to an integer a
 * @b: pointer to an integer b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
