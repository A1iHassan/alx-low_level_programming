#include "main.h"

/**
 * _strchr - bla
 * @s: bla
 * @c: bla
 * Return: bla
 */

char *_strchr(char *s, char c)
{
	char *ocr;

	while (*s != '\0')
	{
		if (*s == c)
		{
			*ocr = *s;
			return (ocr);
		} else if (*s == '\0')
			return (NULL);
		s++;
	}
}
