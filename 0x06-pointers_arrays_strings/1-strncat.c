#include "main.h"

/**
 * _strncat - bla
 * @dest: bla
 * @src: bla
 * @n: bla
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp;
	int i, j, k, l, m;

	i = 0;
	j = 0;
	l = 0;
	m = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	if (n <= j)
		k = i + n;
	else
		k = i + j;

	while (l < k)
	{
		temp[l] = dest[l];
		if (l == i)
		{
			temp[l] = src[m];
			m++;
			l++;
		}
		l++;
	}
	dest = temp;
	return (dest);
}
