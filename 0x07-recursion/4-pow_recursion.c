#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: value, given as an input
 * @y: value, given as an input, represents a power
 *
 * Return: value of x raised to the power of y, if if y < 0,
 * returns -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * (_pow_recursion(x, y -= 1)));
}
