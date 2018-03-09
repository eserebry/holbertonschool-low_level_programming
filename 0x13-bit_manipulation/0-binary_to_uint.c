#include "holberton.h"

/**
 * _strlen - returns lenght of the string str
 *
 * @str: pointer to a string str
 *
 * Return: lenght of the str
 */
unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _pow- returns the value of x raised to the power of y.
 *
 * @x: value, given as an input
 * @y: value, given as an input, represents a power
 *
 * Return: value of x raised to the power of y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int mult = 1;

	while (y != 0)
	{
		mult = mult * x;
		y--;
	}
	return (mult);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string b
 *
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int ui = 0;
	unsigned int len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			ui += _pow(2, len - 1);
		if ((b[i] >= 'a' && b[i] <= 'z') || (b[i] >= 'A' && b[i] <= 'Z'))
			return (0);
		i++;
		len--;
	}
	return (ui);
}
