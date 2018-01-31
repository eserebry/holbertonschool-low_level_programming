#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int k;
	
	i = 0;
	k = 0;
	while(src[i] != '\0')
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	return (dest);
}
