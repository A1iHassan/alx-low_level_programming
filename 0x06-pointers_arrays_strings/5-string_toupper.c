#include "main.h"

/**
 * string_toupper - bla
 * @x: bla
 * Return: bla
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] > 96 && x[i] < 122)
			x[i] -= 32;
		i++;
	}
	return (x);
}
