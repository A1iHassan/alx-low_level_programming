#include "main.h"

/**
 * _strcat - bla
 * @dest: bla
 * @src: bla
 * Return: bla
 */

char *_strcat(char *dest, char *src)
{
	char temp[1000000];
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		temp[i] = dest[i];
		i++;
	}

	while (src[j] != '\0')
	{
		temp[i] = src[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	dest = temp;
	return (dest);
}
