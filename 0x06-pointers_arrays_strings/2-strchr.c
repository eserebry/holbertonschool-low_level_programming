#include "holberton.h"

/**
 * _strchr - ocates a character in a string.
 *
 * @s: pointer to a fist element of the string s
 * @c: character which first occurrence we are looking for
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
