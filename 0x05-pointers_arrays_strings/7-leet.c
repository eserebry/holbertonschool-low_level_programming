#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 *
 * @str: pointer to a string str, given as an input
 *
 * Return: pointer to a first element of the string str.
 */
char *leet(char *str)
{
	char alpha[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;
	int k;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; alpha[k] != '\0'; k++)
		{
			if (str[i] == alpha[k])
				str[i] = numbers[k];
		}
	}
	return (str);
}
