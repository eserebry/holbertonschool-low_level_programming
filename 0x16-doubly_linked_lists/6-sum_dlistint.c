#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 *
 *@head: pointer to an adress of the head of the doubly linked list dlistint_t
 *
 * Return: sum of all the data (n), or 0 if it's empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
