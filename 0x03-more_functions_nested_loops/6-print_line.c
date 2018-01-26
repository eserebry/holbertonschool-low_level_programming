#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: number of times the character _ should be printed.
 */
void print_line(int n)
{
	char l;
	int i;

	l = '_';
	i = 0;
	while (i < n)
	{
		_putchar(l);
		i++;
	}
	_putchar('\n');
}
