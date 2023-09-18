#include "main.h"

/**
 * strlen - bla
 * @s: bla
 * Return: bla
 */

int _strlen(char *s)
{
	int i = 0;
	int j;

	while (true)
	{
		if (*(s + i) == '\0')
			break;
		j += sizeof(*(s + i));
		i++;
	}
	return (j);
}
