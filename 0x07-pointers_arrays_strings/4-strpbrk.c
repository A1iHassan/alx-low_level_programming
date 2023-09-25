#include "main.h"

/**
 * _strpbrk - bla
 *@s: bla
 *@accept: bla
 *Return: bla
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
