#include "holberton.h"

/**
 * _lenght - returns the length of a string.
 *
 * @s: pointer to a first element of the string s.
 *
 * Return: lenght of the  string
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + _lenght(s + 1));
}

/**
 * iter - checking if the first and last characters of the string s are the
 * same and so on and so on.
 *
 * @s: pointer to a first element of the string s, given as a parameter
 * @i: integer i, responsible for a first half of the string
 * @j: integer j, responsible for the second half of the string
 *
 * Return: 1, if string is a palindrome, 0 if its not, else calling herself
 */
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

/**
 * is_palindrome - checking if string is palindrome or not
 *
 * @s: pointer to a first element of the string s, given as a parameter
 *
 * Return: 1, if string is empty, else calling to the helper function iter
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (iter(s, 0, _lenght(s) - 2));
}
