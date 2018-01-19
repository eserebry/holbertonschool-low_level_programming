#include <stdio.h>

/**
 * main  - prints the numbers from 00 to 99
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int e;

	d = '0';
	e = '0';
	while  (d <= '9')
	{
		while  (e <= '9')
		{
			putchar(d);
			putchar(e);
			if (d != '9' || e != '9')
			{
				putchar(',');
				putchar(' ');
			}
			e++;
		}
		d++;
		e = '0';
	}
	putchar('\n');
	return (0);
}
