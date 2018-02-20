#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: pointer to a structure dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name == NULL)
		printf("Name: nil\n");
	if (d->age == 0 || d->owner == NULL)
		printf("nil\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
