#include "holberton.h"

/**
 * _strncat - appends not more than n characters from string src,
 * and then adds a terminating '\0'.
 *
 * @dest: pointer to a first element of the srting dest
 * @src: pointer to a first element of the string src
 * @n: number of bytes to be copied
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		if (k < n)
			dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
