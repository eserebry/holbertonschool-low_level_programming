#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	c = '0';
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c < 10)
			{
				if (b != 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			if (c > 9)
			{
				if (b != 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
