#include "lists.h"

/**
 * print - prints before the main function is executed.
 *
 */
void print (void) __attribute__ ((constructor));
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my houseupon my back!\n");
}
