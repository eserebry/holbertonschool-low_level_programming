#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer to a first element of the string s
 * @accept: pointer to a first element of the string accept
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept, 0  otherwise
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
		if (accept[j] != s[i])
			return (count);
	}
	return (0);
}
