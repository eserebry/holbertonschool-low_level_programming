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

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
