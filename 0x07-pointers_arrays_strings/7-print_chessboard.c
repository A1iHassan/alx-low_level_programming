#include "main.h"

/**
 * print_chessboard - bla bla
 * @a: bla bla
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_ptchar('\n');
		i++;
	}
}
