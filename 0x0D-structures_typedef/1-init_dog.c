#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to a structure dog
 * @name: poiner to a varibale name
 * @age: variable age
 * @owner: pointer to a variable owner
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
