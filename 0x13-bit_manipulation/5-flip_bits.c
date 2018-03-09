#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 *
 * @n: number n
 * @m: number m
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		if ((diff & 1) == 1)
			count++;
		diff = diff >> 1;
	}
	return (count);
}
