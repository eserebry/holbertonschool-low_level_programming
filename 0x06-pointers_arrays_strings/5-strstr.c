#include "holberton.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: ponter to a first element of the string haystack
 * @needle: pointer to a first element of the string needle
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			while (haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			return (needle);
		}
	}
	return (0);
}
