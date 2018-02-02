#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
	while(src[k] != '\0')
	{
		if (k < n)
			dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
