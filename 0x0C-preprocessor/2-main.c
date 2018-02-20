#include <stdio.h>
#define _FILE_

/**
 * main - prints the name of the file it was compiled from
 *
 */
void main(void)
{
	printf("%s\n", __FILE__);
}
