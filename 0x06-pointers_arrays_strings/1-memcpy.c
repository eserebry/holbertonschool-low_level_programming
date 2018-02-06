#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the memory area dest
 * @src: poiner to the memory area src
 * @n: number of bytes to copy
 *
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i !=  j; i++)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
