#include <stdlib.h>

/**
 * _strdup - copies a given string to a newly allocated memory
 * @str: the given string
 * Return: a value of type char *
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	while(*str)
		i++;

	a = malloc(i * sizeof(char) + 1);

	if (a == NULL)
		return (0);

	while(j <= i)
	{
		a[j] = str[j];
		j++;
	}
	return (a);
}
