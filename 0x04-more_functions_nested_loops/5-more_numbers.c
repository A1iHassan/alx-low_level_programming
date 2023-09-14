#include "main.h"

/**
 * more_numbers - bla
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar(49);
				k = j % 10;
			}
			_putchar(k + 48);
		}
		_putchar('\n');
	}
}
