#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns lenght of the string str
 *
 * @str: pointer to a first element of the tring str
 *
 * Return: lenght of the string str
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: number of the argusments, passed to the program.
 * @av: arguments, passed to the program.
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;

	if (ac == 0)
		return (NULL);
	av = malloc(ac * sizeof(char *));
	if (av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		av[i] = malloc(ac * sizeof(char));
		if (av[i] == NULL)
			return (NULL);
		_putchar('\n');
	}
	return (av[i]);
}
