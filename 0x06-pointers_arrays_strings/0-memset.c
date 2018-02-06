#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer tothe memory area s
 * @b: constatnt byte b
 * @n: number of the bytes to fill
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		for (j = 0; j < n; j++)
		{
			s[j] = b;
		}
	}
	return (s);
}
