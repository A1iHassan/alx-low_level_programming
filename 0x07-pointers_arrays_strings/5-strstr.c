#include "main.h"

/**
 * _strstr - bla
 * @haystack: bla
 * @haystack: bla
 * Return: bla
 */

char *_strstr(char *haystack, char *needle)
{
	char *i;

	while (*haystack >= '\0')
	{
		i = haystack;

		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle != '\0')
		{
			return (i);
		}

		haystack = i + 1;
		needle = needle - (haystack - i);
	}

	return (NULL);
}
