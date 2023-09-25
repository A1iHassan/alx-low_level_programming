#include "main.h"

/**
 * _strchr - bla
 * @s: bla
 * @c: bla
 * Return: bla
 */

char *_strchr(char *s, char c)
{
	char *empty = NULL;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (empty);
}
