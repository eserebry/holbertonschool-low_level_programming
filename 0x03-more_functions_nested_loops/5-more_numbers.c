#include "holberton.h"

/**
 * more_numbers - 10 times the numbers,
 * followed by a new line.
 *
 */
void more_numbers(void)
{
	int n;
	int i;

	i = 0;
	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9 && n < 15)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
