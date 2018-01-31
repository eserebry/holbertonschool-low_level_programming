#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: pointer on a first element of the string s
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
