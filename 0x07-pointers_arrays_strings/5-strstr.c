#include "main.h"

/**
 * _strstr - bla
 * @haystack: bla
 * @haystack: bla
 * Return: bla
 */

char *_strstr(char *haystack, char *needle)
{
	char *check;
	int i;

	while  (*haystack != '\0')
	{
		while (*needle = '\0')
		{
			if (*haystack == *needle)
			{	
				check = haystack;
				i = 0;
				while (*(needle + i) >= '\0')
				{
					if (*(needle + i) != *(check + i))
						break;
					i++;
					if (*(needle + i) == '\0')
						return (check);
				}
			}
			needle++;
		}
		haystack++;
	}
	return ('\0');
}
