#include "holberton.h"

/**
 * wildcmp - compares two strings
 *
 * @s1: pointer to a first element of the string s1
 * @s2: pointer to a first element of the string s2
 *
 * Return: 1 if strings are equal, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 != *s2) && *s2 != '*')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 != '\0' && *s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else
	  return (0);
}
