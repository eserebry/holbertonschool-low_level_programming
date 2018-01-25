#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: 0, always success
 */
int main(void)
{
	long int f;
	long int a;
	long int b;
	int i;

	f = 0;
	a = 1;
	b = 0;
	i = 0;
	while (i < 49)
	{
		f = a + b;
		b = a;
		a = f;
		if (i != 48)
			printf("%ld, ", f);
		else
		  printf("%ld", f);
		i++;
	}
	printf("\n");
	return (0);
}
