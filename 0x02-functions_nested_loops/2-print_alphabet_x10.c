#include "holberton.h"

/**
 * print_alphabet_x10  - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	do {
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	} while (i < 10);
}
