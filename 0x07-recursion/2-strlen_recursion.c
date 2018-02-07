#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: pointer to a firstelement of the string s.
 *
 * Return: lenght of hte string
 */
int _strlen_recursion(char *s)
{
	static int i;

	if (s[i] == '\0')
	{
		return (i);
	}
	else
	{
		i++;
		return (_strlen_recursion(&s[i++]));
	}
}
