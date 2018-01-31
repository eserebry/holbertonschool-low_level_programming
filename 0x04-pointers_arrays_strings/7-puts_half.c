#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: pointer to the first element of the string str
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		i = (i - 1) / 2;
		i = i + 1;
	}
	else
		i = i / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
