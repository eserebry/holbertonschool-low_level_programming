#include "holberton.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: 0, always success
 */
int main(void)
{
	int k;
	int count;
	int sum;

	k = 1;
	count = 0;
	sum = 0;
	while (sum < 1024)
	{
		if (k % 3 == 0 || k % 5 == 0)
		{
			count++;
			sum += k;
		}
		k++;
	}
	printf("%d\n", sum);
	return (0);
}
