#include "holberton.h"

/**
 * _strlen - returns the lenght of the string.
 *
 * @s: pointer to a first character of the string s
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
