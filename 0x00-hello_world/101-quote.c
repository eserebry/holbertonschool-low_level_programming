#include <stdio.h>
#include <errno.h>

/**
 * main  - prints given error message, followed by a new line,
 * to the standard error.
 * Return: 1 (error)
*/
int  main(void)
{
	perror("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
