#include "main.h"

/**
 * print_triangle - bla
 * @size: bla
 */

void print_triangle(int size)
{
	int i, j, k;

	for (k = 1; k <= size; k++)
	{
		for (i = size - k; i > 0; i--)
		{
			_putchar(' ');
		}
		for (j = size - i; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
