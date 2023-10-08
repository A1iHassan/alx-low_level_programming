#include <stdlib.h>

/**
 * _calloc - allocates memory and gives it the value zero
 * @nmemb: number of members
 * @size: size of each member
 * Return: a value of type void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *a;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	b = a;

	while (i < nmemb * size)
	{
		b[i] = 0;
		i++;
	}

	return (a);
}
