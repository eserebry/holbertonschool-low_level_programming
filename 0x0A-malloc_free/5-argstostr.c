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
	int j;
	int k = 0;
	int lenght = 0;
	char *ar;

	if (ac == 0)
		return (NULL);
	lenght += _strlen(av[1]);
	ar = malloc((lenght + ac) * sizeof(char) + 1);
	if (ar == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ar[k] = av[i][j];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	ar[k] = '\0';
	return (ar);
}
