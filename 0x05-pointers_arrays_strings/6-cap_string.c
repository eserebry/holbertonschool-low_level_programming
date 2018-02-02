#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: pointer to a first symbol of the string str
 *
 * Return: pointer to a resulting string str
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t'
		     || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
		     || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
		     || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
		     || str[i - 1] == '}') && (str[i]  >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
