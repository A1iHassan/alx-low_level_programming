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
	int j;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			j = 1;
			break;
		}
		if (s1[i] < s2[i])
		{
			j = -1;
			break;
		}
		i++;
	}
	return (i);
}
