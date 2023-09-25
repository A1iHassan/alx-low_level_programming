#include "main.h"

/**
 * _strchr - bla
 * @s: bla
 * @c: bla
 * Return: bla
 */

char *_strchr(char *s, char c)
{
	char *temp = "";

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (temp);
}
