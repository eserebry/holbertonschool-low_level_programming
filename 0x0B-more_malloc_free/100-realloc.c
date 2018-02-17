#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to a new allocated memeory block
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i = 0;
	char *new;
	char *old;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == 0)
		return (NULL);
	if (ptr == 0)
		return (ptr2);
	old = ptr;
	new = ptr2;
	if (old_size < new_size)
	{
		while (i < old_size)
		{
			new[i] = old[i];
			i++;
		}
	}
	if (old_size > new_size)
	{
		while (i < new_size)
		{
			new[i] = old[i];
			i++;
		}
	}
	/*ptr2 = new;*/
	free(ptr);
	return (ptr2);
}
