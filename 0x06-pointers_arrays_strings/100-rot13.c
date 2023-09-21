#include "main.h"

/**
 * rot13 - bla
 * @x: bla
 * Return: bla
 */

char *rot13(char *x);
{
	char *a;
	char *b;
	int i = 0;
	int j;

	a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
	return (0);
}

