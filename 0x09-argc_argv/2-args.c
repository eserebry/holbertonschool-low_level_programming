#include <stdio.h>
/**
 * main - prints all arguments it receives.
 *
 * @argc: number of the argusments, passed to the program.
 * @argv: arguments, passed to the program.
 *
 * Return:  0, always success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
