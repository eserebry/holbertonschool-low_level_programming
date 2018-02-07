#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: pointer to a first element of the string s
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(s[i]);
	_puts_recursion(&s[i] + 1);
}
