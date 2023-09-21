#include "main.h"

/**
 * string_toupper - bla
 * @x: bla
 * Return: bla
 */

char *string_toupper(char *x)
{
	char *y;
	int i = sizeof(x) / sizeof(char);

	while ( i > 0)
	{
		if (x[i] > 96 && x[i] < 122)
			x[i] -= 32;
	}
	y = x;
	return (y);
}
