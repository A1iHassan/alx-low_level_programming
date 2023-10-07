#include <stdlib.h>

/**
 * malloc_checked - allocates a given number of bytes on the heap
 * @b: number of bytes
 * Return: a value of type void *
 */

void *malloc_checked(unsigned int b)
{
	void *a;
	
	a = malloc(b);
	if (a == NULL)
		return (98);
	return ((void *)a);
}
