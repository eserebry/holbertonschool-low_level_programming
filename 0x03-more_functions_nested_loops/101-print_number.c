#include "holberton.h"

/**
 * print_number - prints an integer.
 *
 * @n: input number..
 *
 */
void print_number(int n)
{
	int num;
	int i;
	int k;
	int t;

	t = 1;
	i = 0;
	num = n;
	if (n == 0)
	{
		_putchar(0 + '0');
	}
	if (n < 0)
	{
		n = -n;
		num = n;
		_putchar('-');
	}
	while (num >= 1)
	{
		num = num / 10;
		i++;
	}
	k = i;
	while (k > 1)
	{
		t = t * 10;
		k--;
	}
	while (i > 0)
	{
		_putchar(n / t + '0');
		n = n % t;
		t = t / 10;
		i--;
	}
}
