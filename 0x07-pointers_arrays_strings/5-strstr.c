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

	while (*haystack)
	{
		i = haystack;

		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (!*needle)
		{
			return (start);
		}

		haystack = i + 1;
		needle = needle - (haystack - i);
	}

	return (NULL);
}
