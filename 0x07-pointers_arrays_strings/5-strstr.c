#include "main.h"

/**
 * _strstr - bla
 * @haystack: bla
 * @haystack: bla
 * Return: bla
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;

	while (*haystack)
	{
		start = haystack;

		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (!*needle)
		{
			return (start);
		}

		haystack = start + 1;
		needle = needle - (haystack - start);
	}

	return (NULL);
}
