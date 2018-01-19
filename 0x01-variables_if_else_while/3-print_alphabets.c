#include <stdio.h>

/**
 * main  - prints the alphabet in lowercase, and then
 * in uppercase, followed by a new line.followed by a new line.
 * Print the last digit of the number stored in the variable n.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	for (chr = 'A'; chr <= 'Z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
