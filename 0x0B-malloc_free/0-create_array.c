#include <stdlib.h>

/**
 * create_array - creates an array dinamically
 * @size: array's size
 * @c: value to initialize the array's elements with
 * Return: a value of type char *
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
		return (0);
	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (0);

	while (size--)
	{
		a[size] = c;
	}
	return (a);
}
