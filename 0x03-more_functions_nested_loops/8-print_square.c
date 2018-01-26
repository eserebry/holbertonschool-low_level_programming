#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: is the size of the square.
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
