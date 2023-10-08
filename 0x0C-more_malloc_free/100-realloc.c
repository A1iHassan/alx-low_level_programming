#include <stdlib.h>

/**
 * _realloc - re-allocates a chunk of memory
 * @ptr: a pointer to the memory to be re-allocated
 * @old_size: old size
 * @new_size: new size
 * Return: a value of type void *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	char *b, *c;
	unsigned int i = 0;
	unsigned int j;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);

	if (old_size > new_size)
		j = old_size;
	else
		j = new_size;
	b = a;
	c = ptr;

	while (i < j)
	{
		b[i] = c[i];
		i++;
	}
	return (a);
}
