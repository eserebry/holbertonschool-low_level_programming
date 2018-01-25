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
	int k;
	int i;

	f = 1;
	k = 0;
	i = 0;
	while (i <= 50)
	{
		k += f;
		printf("%d, ", k);
		i++;
		f += k;
		printf("%d, ", f);
		i++;
	}
	printf("\n");
	return (0);
}
