#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies a given string to a newly allocated memory
 * @str: the given string
 * Return: a value of type char *
 */

char *_strdup(char *str)
{
	int i = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	a = malloc(sizeof(str) - 1);
	printf("%ld\n", sizeof(str));

	if (a == NULL)
		return (0);

	while (*str)
	{
		a[i] = *str;
		printf("%c\n", *a);
		i++;
		str++;
	}
	return (a);
}
