#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 *
 *@head: pointer to the head of the doubly linked list dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
