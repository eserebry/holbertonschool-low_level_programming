#include <stdio.h>
/**
 * main - prints the name of the program
 *
 * @argc: number of the argusments, passed to the program.
 * @argv: in this case it represents the name of the program.
 *
 * Return:  0, always success
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
