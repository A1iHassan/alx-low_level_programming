#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints dog information
 * @d: dog instance
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);
	if (d->name == NULL)
		printf("(nil\n");
	else
		printf("%s\n", d->name);
	if (d->age == 0)
		printf("(nil)\n");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
