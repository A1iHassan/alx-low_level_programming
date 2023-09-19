#include "main.h"

/**
 * _strcpy - bla
 * @dest: bla
 * @src: bla
 * Return: bla
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');
	return (dest);
}
