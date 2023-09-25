#include "main.h"

/**
 * _strpbrk - bla
 * @s: bla
 * @accept: bla
 * Return: bla
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s >= '\0')
	{
		while (*accept >= '\0')
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		s++;
	}
	return ('\0');
}
