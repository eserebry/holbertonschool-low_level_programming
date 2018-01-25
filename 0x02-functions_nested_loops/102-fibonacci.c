#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: 0, always success
 */
int main(void)
{
	int f;
	int a;
	int b;
	int i;

	f = 0;
	a = 1;
	b = 0;
	i = 0;
	while (i <= 50)
	{
		f = a + b;
		b = a;
		a = f;
		if (i != 50)
			printf("%d ,", f);
		else
		  printf("%d", f);
		i++;
	}
	printf("\n");
	return (0);
}
