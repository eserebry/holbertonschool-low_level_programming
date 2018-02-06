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

	j = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for(j=0; needle[j] != '\0'; j++)
		{
			while (haystack[i] == needle[j])
			{
				if (haystack[i] == needle[j])
					j++;	
				if (haystack[i] != needle[j])
					break;
			}
		}
		return (&needle[i]);
	}
	return (0);
}
