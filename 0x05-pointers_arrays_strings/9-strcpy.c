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

	do {
		dest[i] = src[i];
		i++;
	} while (str[i] != '\0');
	return (dest);
}
