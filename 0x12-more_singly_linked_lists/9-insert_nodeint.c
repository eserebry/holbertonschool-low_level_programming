#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer, to an address, of to a singly linked list h
 * @idx: index of the list where the new node should be added.
 * @n: value of a new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *head;
	while (tmp != NULL)
	{
		if (i == idx)
		{
			if (tmp == NULL)
				new->next = NULL;
			else if (tmp != NULL)
			{
				new->next = tmp->next;
				tmp->next = new;
				return (new);
			}
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
