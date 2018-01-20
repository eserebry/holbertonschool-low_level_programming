#include <stdio.h>

/**
 * main - prints all possible combitations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if  (((a == c) && (b < d)) || (a < c))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
