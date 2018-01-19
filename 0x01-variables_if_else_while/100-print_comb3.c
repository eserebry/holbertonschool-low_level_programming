#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int e;
	int i;

	d = '0';
	e = '0';
	i = '0';
	while  (d <= '9')
	{
		while  (e <= '9')
		{
			if (d != e)
			{
				putchar(d);
				putchar(e);
				if (d != '8' || e != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			e++;
		}
		d++;
		i++;
		e = i;
	}
	putchar('\n');
	return (0);
}
