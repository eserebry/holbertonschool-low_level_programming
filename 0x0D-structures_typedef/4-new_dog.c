#include "dog.h"
#include "stdlib.h"

/**
 * _strlen - returns lenght of the string
 *
 * @str: poiter to a first element of the str
 *
 * Return: lenght of the str
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copys s1 into s2 and adds null terminating byte
 *
 * @s1: pointer to a first element of s1
 * @s2: pointer to a first elelemt of s2
 *
 * Return: pointer to a first element of the s2
 */
char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to a new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;
	char *name_cpy;
	char *owner_cpy;

	Dog = malloc(sizeof(dog_t));
	if (Dog == NULL)
		return (NULL);
	name_cpy = malloc(sizeof(char) * _strlen(name));
	if (name_cpy == NULL)
		return (NULL);
	owner_cpy = malloc(sizeof(char) * _strlen(owner));
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		return (NULL);
	}
	_strcpy(name, name_cpy);
	_strcpy(owner, owner_cpy);
	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;
	return (Dog);
}
