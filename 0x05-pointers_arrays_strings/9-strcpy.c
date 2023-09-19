#include "main.h"

/**
 * _strcpy - bla
 * @dest: bla
 * @src: bla
 * Return: bla
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
