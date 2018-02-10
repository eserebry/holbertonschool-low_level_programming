#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the multiplication, followed by a new line
 *
 * @argc: number of the argusments, passed to the program.
 * @argv: arguments, passed to a program.
 *
 * Return:  1, if number of arguments not 2, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
