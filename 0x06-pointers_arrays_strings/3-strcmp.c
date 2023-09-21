#include "main.h"

/**
 * _strcmp - bla
 * @s1: bla
 * @s2: bla
 * Return: bla
 */

int _strcmp(char *s1, char *s2);
{
	int i = 0;

	while (i != 0)
	{
		if (*s1 > *s2)
		{
			i = 1;
			break;
		}
		if (*s1 < *s2)
		{
			i = -1;
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
