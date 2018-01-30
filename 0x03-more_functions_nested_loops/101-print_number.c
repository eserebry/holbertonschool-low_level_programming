#include "holberton.h"

/**
 * print_number - prints an integer.
 *
 * @n: input number.
 *
 */
void print_number(int n)
{
	int num;
	int i;
	int t;

	t = 1;
	i = 1;
	num = n;
	if (n < 0)
	{
		_putchar('-');
	}
	while (num > 9 || num < -9)
	{
		num = num / 10;
		i++;
		t = t * 10;
	}
	while  (i  > 0)
	{
		if (n >= 0)
		{
			_putchar(n / t + '0');
			n %= t;
			t /= 10;
			i--;
		}
		if (n < 0)
		{
			_putchar((n / t * -1) + '0');
			n %= t;
			t /= 10;
			i--;
		}
	}
}
