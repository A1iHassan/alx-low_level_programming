#include "main.h"

/**
 * _memcpy - bla
 * @dest: bla
 * @src: bla
 * @n: bla
 * Return: bla
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
