#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: 0, always success
 */
int main(void)
{
	int f;
	int k;
	int i;
	int sum;

	f = 1;
	k = 0;
	i = 0;
	sum = 0;
	while (k < 4000000 && f < 4000000)
	{
		k += f;
		if (k % 2 == 0)
			(sum += k);
		i++;
		f += k;
		if (f % 2 == 0)
			(sum += f);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
