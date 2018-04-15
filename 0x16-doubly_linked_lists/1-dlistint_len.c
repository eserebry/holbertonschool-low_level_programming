#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 *
 *@h: pointer to a head of the doubly linked list dlistint_t
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
