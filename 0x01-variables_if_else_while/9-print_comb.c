#include <stdio.h>

/**
 * main  - prints all possible combinations of single-digit numbers.
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
