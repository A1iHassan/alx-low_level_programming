#include "main.h"

/**
 * _strstr - bla
 * @haystack: bla
 * @haystack: bla
 * Return: bla
 */

char *_strstr(char *haystack, char *needle)
{
	char *string, *substring;

	while (*haystack != '\0')
	{
		if (*haystack != *needle)
			continue;

		string = haystack;
		substring = needle;

		while (*string == *substring && *substring != '\0')
		{
			string++;
			substring++;

		}
		if (*substring == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}

