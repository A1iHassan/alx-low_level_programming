#include "main.h"

/**
 * _strcat - bla
 * @dest: bla
 * @src: bla
 * Return: bla
 */

char *_strcat(char *dest, char *src)
{
	char *temp;
	int i, j, k, l, m;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 0;

	while (dest[i] != '\0')
	{
		i++
	}

	while (src[j] != '\0')
	{
		j++;
	}

	k = i + j;

	temp = (char*)malloc(k * sizeof(char));

	while (l < k)
	{
		temp[l] = dest[l];

		if (l == i)
		{
			while (m <= l)
			{
				temp[l] = src[m];
				m++;
				l++;
			}
		}
		l++;
	}

	dest = temp;
	return (dest);
}
