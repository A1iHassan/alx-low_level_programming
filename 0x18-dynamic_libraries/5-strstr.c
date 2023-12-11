#include "main.h"

/**
 * _strstr - entry point to the code
 * @haystack: main string
 * @needle: substring
 * Return: null or main string indicator5
 */

char *_strstr(char *haystack, char *needle)
{
	char *string, *substring;

	while (*haystack != '\0')
	{
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

