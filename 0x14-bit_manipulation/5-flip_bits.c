#include "main.h"

/**
 * flip_bits - counts bits that don't match
 * @n: first number
 * @m: second number
 * Return: j
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;

	for (i = 0; i < 64; i++)
	{
		if ((n & 1) != (m & 1))
			j ++;
		n = n >> 1;
		m = m >> 1;
	}
	return (j);
}
