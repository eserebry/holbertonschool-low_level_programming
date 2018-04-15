#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position.
 *
 *@h: pointer to an adress of the head of the doubly linked list dlistint_t
 *@n: data of the new node
 *@idx: index of the list where the new node should be added.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *h;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (tmp != NULL)
	{
		if (i == (idx - 1))
		{
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
