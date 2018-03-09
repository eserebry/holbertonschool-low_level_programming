#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: integer to convert
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 0;
	int check = 0;

	mask = ~mask;
	mask = mask >> 1;
	mask = ~mask;

	if (n == 0)
		_putchar('0');
	while (mask > 0)
	{
		if ((n & mask) != 0)
			check = 1;
		if ((n & mask) == 0  && check == 1)
			_putchar('0');
		else if ((n & mask) != 0)
			_putchar('1');
		mask = mask >> 1;
	}
}
