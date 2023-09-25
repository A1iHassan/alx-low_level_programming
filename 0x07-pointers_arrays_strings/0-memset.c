#include "main.h"

/**
 * _memset - bla
 * @s: bla
 * @b: bla
 * @n: bla
 * Return: bla
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
