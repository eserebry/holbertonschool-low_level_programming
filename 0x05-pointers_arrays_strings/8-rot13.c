#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @str: pointer to a first element of the string str,
 * given as an input
 *
 * Return: ponter to a first elememnt of the string str
 */
char *rot13(char *str)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int k;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; input[k] != '\0'; k++)
		{
			if (str[i] == input[k])
			{
				str[i] = output[k];
				break;
			}
		}
	}
	return (str);
}
