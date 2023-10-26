#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned value = 0, j = 1;
	int i = 0;

	for (i = 0; *(b + i); i++)
	{
		if (*(b + i) > '1' || *(b + i) < '0' || !b)
			return (0);
	}
	for (i = i; i > -1; i--)
	{
		value += (*(b + i - 1) - '0') * j;
		j *= 2;
	}
	return (value);
}
