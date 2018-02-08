#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + _lenght(s + 1));
}
int iter(char *s, int i, int j)
{
	if (i < j)
	{
		if (s[i] == s[j])
			return (iter(s, i + 1, j - 1));
	}
	if (s[i - 1] == s[j])
		return (1);
	if (i == j)
		return (1);
	else
		return (0);
}

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (iter(s, 0, _lenght(s) - 2));
}
