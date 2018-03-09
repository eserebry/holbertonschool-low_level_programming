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
	unsigned int num_n = 0, num_m = 0;

	while (n)
	{
		num_n += n & 1;
		n = n >> 1;
	}
	while (m)
	{
		num_m += m & 1;
		m = m >> 1;
	}
	return (num_n ^ num_m);
}
