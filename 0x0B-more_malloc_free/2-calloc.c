#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 *
 * @nmemb: number of the elemnents of the array
 * @size: size of each element of the array in bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == 0)
		return (NULL);
	return (ar);
}
