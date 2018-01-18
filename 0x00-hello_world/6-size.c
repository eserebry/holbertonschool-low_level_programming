#include <stdio.h>

/**
 * main  - prints the size of various types
 * Return: Always 0 (Success)
*/
int  main(void)
{
	char charType;
	int intType;
	long longType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
