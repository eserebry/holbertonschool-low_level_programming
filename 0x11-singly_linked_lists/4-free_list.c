#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to a linked list head
 *
 */
void free_list(list_t *head)
{
	list_t *free_head;

	while (head != NULL)
	{
		head = free_head;
		free_head = free_head->next;
		free(free_head);
	}
}
