#include "holberton.h"

/**
 * _strncpy - copy at most n characters from src into dest.
 *
 * @dest: pointer to a first symbol of the string dest
 * @src: pointer to the first symbol of the string src
 * @n: number of the bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (src[i] != '\0')
	{
		if (i < n)
			dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
