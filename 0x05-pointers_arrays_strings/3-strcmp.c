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
	int k;

	i = 0;
	k = 0;
	if  (s1 && s2)
	{
		while (s1[i] != '\0')
		{
			i++;
		}
		while (s2[k] != '\0')
		{
			k++;
		}
	}
	if (i > k)
		return (15);
	if (i < k)
		return (-15);
	else
		return (0);
}
