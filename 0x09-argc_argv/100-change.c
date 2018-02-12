#include <stdio.h>
#include <stdlib.h>
/**
 * check - check if the elemant of the string integer ot not
 *
 * @argv: pointer, to a first element, of the string argv
 *
 * Return: 1 if the element of the string is int, 0 otherwise
 */

int check(char *argv)
{
	int i = 0;

	while (argv[i] != '\0')
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
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
	int i = 1;
	int count = 0;

	if (check(argv[i]))
		i = atoi(argv[i]);
	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
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
