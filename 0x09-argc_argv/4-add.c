#include <stdio.h>
#include <stdlib.h>
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

	while  (i < argc)
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
