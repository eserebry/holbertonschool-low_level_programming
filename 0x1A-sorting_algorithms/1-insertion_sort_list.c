#include "sort.h"

/**
 * size_list - returning the size of the list
 *
 * @list: Pointer to doubly linked list
 *
 * Return: size of the linked list
 */
int size_list(listint_t *list)
{
	int num = 0;

	while (list != NULL)
	{
		list = list->next;
		num++;
	}
	return (num);
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: Pointer to doubly linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *key = NULL;

	key = (*list)->next;
	while (key != NULL)
	{
		while (key->prev != NULL && key->prev->n > key->n)
		{
			key->prev->next = key->next;
			if (key->next != NULL)
				key->next->prev = key->prev;
			key->next = key->prev;
			key->prev = key->prev->prev;
			key->next->prev = key;
			if (key->prev == NULL)
				*list = key;
			else
				key->prev->next = key;
			print_list(*list);
		}
		key = key->next;
	}
}
