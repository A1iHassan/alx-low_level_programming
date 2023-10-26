#include "main.h"

/**
 * get_bit - returns the bit value at a given index
 * @n: given number
 * @index: desired position
 * Return: 1 0 -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);

	i = n >> (index + 2);
	i = i << (index + 2);
	if (i == n)
		return (0);
	else
		return (1);
	return (-1);
}
