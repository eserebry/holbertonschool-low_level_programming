#include <stdio.h>

#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e;
	int d;
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			if (d > s)
			{
				for (e = '0'; e <= '9'; e++)
				{
					if (e > d)
					{
						putchar(s);
						putchar(d);
						putchar(e);
						if (s != '7' || d != '8' || e != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
