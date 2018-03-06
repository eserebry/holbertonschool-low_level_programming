#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer, to an adress, of a singly linked list head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp1;

	tmp = *head;
	while (tmp != NULL)
	{
		tmp1 = tmp;
		tmp = tmp->next;
		free(tmp1);
	}
	free(tmp);
	free(head);
}
