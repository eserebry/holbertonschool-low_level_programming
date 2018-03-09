#include "holberton.h"

/**
 * print_binary - returns the value of a bit at a given index.
 *
 * @n: integer to check
 * @index: index to check
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 0;

	if (index > (sizeof(unsigned int) * 8))
		return (-1);
	mask = 1;
	mask = mask << index;

	if ((mask & n) == 0)
		return (0);
	else
		return (1);
	return (-1);
}
