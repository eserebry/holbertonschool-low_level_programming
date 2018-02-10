#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: number of the argusments, passed to the program.
 * @argv: one-dimentional array of strings.
 *
 * Return:  0, always success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
