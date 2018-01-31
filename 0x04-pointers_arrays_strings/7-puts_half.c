#include "holberton.h"

/**
 * _strlen - returns the lenght of the string.
 *
 * @s: pointer to a first element  of the string s
 * Return: i, lenght of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: pointer to the first element of the string str
 */
void puts_half(char *str)
{
	int i;
	int lenght;

	i = 0;
	lenght = _strlen(str);
	if (lenght % 2 != 0)
	{
		i = (lenght - 1) / 2;
	}
	else
	{
		i = lenght / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
