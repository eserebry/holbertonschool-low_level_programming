#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0, always success.
 */
int  main(void)
{
	long int i;
	long int k;
	long int max;

	k = 2;
	i = 612852475143;
	while (i > 1)
	{
		if (i % k == 0)
		{
			max = k;
			i = i / k;
		}
		else
			k++;
	}
		printf("%ld\n", max);
	return (0);
}
