#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * of money.
 *
 * @argc: number of the argusments, passed to the program.
 * @argv: arguments, passed to a program.
 *
 * Return:  1, if the number of arguments passed to your program is not
 * exactly 1, 0 otherwise.
 */

int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
		printf("0\n");
	else
	{
		for (; i >= 25; i -= 25)
			count++;
		for (; i < 25 && i >= 10; i -= 10)
			count++;
		for (; i < 10  && i >= 5; i -= 5)
			count++;
		for (; i < 5 && i >= 2; i -= 2)
			count++;
		for (; i < 2 && i > 0; i -= 1)
			count++;
		printf("%d\n", count);
	}
	return (0);
}
