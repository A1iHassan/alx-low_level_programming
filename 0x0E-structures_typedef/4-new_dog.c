#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: a value of type dog_t *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t aa;
	dog_t *a;

	a = &aa;

	a->name = name;
	a->age = age;
	a->owner = owner;

	if (a->name == NULL || age == 0 || a->owner == NULL)
		return (NULL);

	return (a);
}
