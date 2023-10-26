#include "main.h"

/**
 * print_binary - converts a number from base 10 to base 2
 * @n: given number
 */

void print_binary(unsigned long int n)
{
	unsigned long i;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		i = n >> 1;
		i = i << 1;
		if (i != n)
		{
			print_binary(n >> 1);
			_putchar('1');
		}
		else
		{
			print_binary(n >> 1);
			_putchar('0');
		}
	}
}
