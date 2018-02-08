#include "holberton.h"

/**
 * iter - funscion to check, if the given number is power of
 * counter
 *
 * @n: integer, given as an input number
 * @i: counter, that will be increased, until it became square root of n
 *
 * Return: i, if i times i is n, which means, tht the i is the square root
 *of n, -1 if n doesn't have square root, caling itself otherwise
 */
int iter(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		return (iter(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: integer, given as an input number
 *
 * Return: If n does not have a natural square root, the function return -1,if
 * n equals to 1, function return 1, else function calling helper function iter
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (iter(n, 0));
}
