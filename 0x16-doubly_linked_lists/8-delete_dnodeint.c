
#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 *
 *@head: pointer to an adress of the head of the doubly linked list dlistint_t
 *@index: index of the list where the new node should be added.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp1;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (i == index - 1)
		{
			tmp1 = tmp;
			if (tmp1->next != NULL)
			{
				tmp->next->prev = tmp->prev;
			}
			if (tmp1->prev != NULL)
			{
				tmp->prev->next = tmp->next;
			}
			free(tmp1);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
