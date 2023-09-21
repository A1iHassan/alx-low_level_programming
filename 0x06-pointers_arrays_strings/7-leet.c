#include "main.h"

/**
 * leet - bla
 * @x: bla
 * Return: blo
 */

char *leet(char *x)
{
	char a[10] = {'A', 'E', 'L', 'O', 'T', 'a', 'e', 'l', 'o', 't'};
	char b[10] = {'4', '3', '1', '0', '7', '4', '3', '1', '0', '7'};
	int i, j;

	i = 0;

	while (x[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (x[i] == a[j])
				x[i] = b[j];
			j++;
		}
		i++;
	}
	return (x);
}
