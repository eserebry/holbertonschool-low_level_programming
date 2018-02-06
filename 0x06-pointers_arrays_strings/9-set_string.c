#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: pointer to a pointer tofirst element of string s
 * @to: pointer to a first element of the string tot
 */
void set_string(char **s, char *to)
{
	*s = to;
}
