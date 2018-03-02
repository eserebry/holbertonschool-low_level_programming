#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the lenght of the string str
 *
 * @str: pointer to a first element of the string str
 *
 * Return: lenght of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to an a adress of the linked list head
 * @str: pointer to a string str
 *
 * Return: adress, of the new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = _strlen(new_head->str);
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
