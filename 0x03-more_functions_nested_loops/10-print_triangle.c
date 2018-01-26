#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = size; b >= 1; b--)
		{
			if (b > a)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
