#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - calculates the length of a given string
 * @s: the given string
 * Return: a value of type int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
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

	a = malloc(sizeof(char) * _strlen(str) + 1);

	if (a == NULL)
		return (0);

	while (*str)
	{
		a[i] = *str;
		i++;
		str++;
	}
	return (a);
}
