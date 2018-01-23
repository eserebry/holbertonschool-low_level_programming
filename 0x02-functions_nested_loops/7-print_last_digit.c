#include "holberton.h"

/**
 * print_last_digit  - prints the last digit of a number.
 * @i:  - input integer
 *
 * Return: value of the last digit.
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		return (-i % 10);
	}
	if  (i > 0)
	{
		return (i % 10);
	}
	else
		return (0);
}
