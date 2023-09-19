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

	while (i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	_putchar('\n');
}
