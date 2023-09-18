#include "main.h"

/**
 * _strlen - bla
 * @s: bla
 * Return: bla
 */

int _strlen(char *s)
{
	int i = 0;
	int j;
	char k;

	while (i)
	{
		if (*(s + i) == '\0')
			break;
		k = *(s + i);
		j += sizeof(k);
		i++;
	}
	return (j);
}
