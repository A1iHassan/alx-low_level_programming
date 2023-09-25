#include "main.h"

/**
 * _strspn - bla
 * @s: bla
 * @accept: bla
 * Return: bla
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*accept >= '\0')
	{
		while (*s >= '\0')
		{
			if (*s == *accept)
				i++;
			accept++;
			s++;
		}
		accept++;
	}
	return (i);
}
