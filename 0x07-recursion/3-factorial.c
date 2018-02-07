#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: integer, given as an input
 *
 * Return: returns the factorial of the given number or
 * return -1 to indicate an error if n is lover, tnah 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
