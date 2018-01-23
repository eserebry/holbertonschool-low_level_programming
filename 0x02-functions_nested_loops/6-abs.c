#include "holberton.h"

/**
 * _abs  - computes the absolute value of an integer.
 * @i:  - input integer
 *
 * Return: absolute value of an integer.
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	if (i > 0)
		return (i);
	else
		return (0);
}
