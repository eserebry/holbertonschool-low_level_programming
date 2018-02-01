#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: pointer, to a fist element of the string.
 *
 * Return: an integer, if there is a number in a string,
 * 0, if there is no numbers in a string.
 */
int _atoi(char *s)
{
	int i;
	unsigned int in;
	int sign;

	i = 0;
	in = 0;
	sign = 0;
	while (s[i] > '9' || s[i] < '0')
	{
		if (s[i] == '-')
		{
			sign++;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		in = in * 10 + (s[i] - '0');
		i++;
	}
	if (sign % 2 != 0)
	{
		in = -1 * in;
		return (in);
	}
	if (in == 0)
		return (0);
	return  (in);
}
