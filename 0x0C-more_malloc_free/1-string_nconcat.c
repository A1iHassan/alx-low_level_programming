#include <stdlib.h>

/**
 * _strlen - calculates the length of a srting
 * @s: a given string
 * Return: a value of type int
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: firt given string
 * @s2: second given string
 * @n: number of bytes used from s2
 * Return: a value of type char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	int i;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= _strlen(s2))
		i = _strlen(s1) + _strlen(s2);
	else
		i = _strlen(s1) + n;

	c = malloc(sizeof(char) * i + 1);
	if (c == NULL)
		return (NULL);

	while (*s1)
	{
		c[j] = *s1;
		s1++;
		j++;
	}

	while (j <= i)
	{
		c[j] = *s2;
		s2++;
		j++;
	}

	c[j] = '\0';
	return (c);
}
