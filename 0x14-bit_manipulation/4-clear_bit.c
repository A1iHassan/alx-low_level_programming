#include "main.h"

/**
 * clear_bit - clears a bit at a given index
 * @n: a given number
 * @index: desired index
 * Return: 1 0 -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0xffffffff;

	if (index > 63)
		return (-1);

	i = i >> index;
	i = i & 0;
	i = i << index;
	*n = *n & i;
	return (1);
}
