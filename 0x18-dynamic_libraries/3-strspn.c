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
		if (*(s + i) != *(accept + i))
			break;
		i++;
	}
	return (i);
}
