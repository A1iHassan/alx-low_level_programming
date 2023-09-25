#include "main.h"

/**
 * _strchr - bla
 * @s: bla
 * @c: bla
 * Return: bla
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
		else if (*s == '\0')
			return (NULL);
		s++;
	}
}
