#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void d_dup(char *a, char *b)
{
	int i = 0;
	while (*b)
	{
		a[i] = *b;
		i++;
		b++;
	}
}

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
	char dname[100], downer[100];

	a = &aa;
	d_dup(dname, name);
	d_dup(downer, owner);

	a->name = dname;
	a->age = age;
	a->owner = downer;

	return (a);
}
