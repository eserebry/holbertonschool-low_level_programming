#include "holberton.h"

/**
 * _strcmp - lexicographically compare the null-terminated
 * strings s1 and s2
 *
 * @s1: pointer to a first element of the string s1
 * @s2: pointer to a first element of the string s2
 *
 * Return: integer greater than, equal to, or less than 0, according
 * as the string s1 is greater than, equal to, or kess than the string s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}
