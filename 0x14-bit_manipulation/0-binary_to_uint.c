#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a base 2 number to base 10
 * @b: pointer to a representative string to the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int temp, value = 0, j = 1;
	int i;

	for (i = 0; *(b + i); i++)
	{
		if (*(b + i) > '1' || *(b + i) < '0' || !b)
			return (0);
	}

	for (i = i; i > 0; i--)
	{
		temp = *(b + i - 1) - '0';
		value += temp * j;
		j *= 2;
	}
	return (value);
}
