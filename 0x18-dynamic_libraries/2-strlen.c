#include "main.h"

/**
 * _strlen - bla
 * @s: bla
 * Return: bla
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
