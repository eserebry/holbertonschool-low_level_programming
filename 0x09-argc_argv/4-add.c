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
 * main - adds positive numbers.
 *
 * @argc: number of the argusments, passed to the program.
 * @argv: arguments, passed to a program.
 *
 * Return:  1, if argument is a character, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if ((check(argv[i])))
		{
			sum += atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
