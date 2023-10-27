#include "main.h"

/**
 * get_endianness - checks for the endianess type on a system
 * Return: 1 0
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
		return (1);
	return (0);
}
