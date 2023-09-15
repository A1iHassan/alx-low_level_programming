#include "main.h"

/**
 * print_triangle - bla
 * @size: bla
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (k = 1; k <= size; k++)
		{
			for (i = size - k; i > 0; i--)
			{
				_putchar(' ');
			}
			for (j = k; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
