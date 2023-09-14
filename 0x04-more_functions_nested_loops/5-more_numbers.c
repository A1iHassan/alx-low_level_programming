#include "main.h"

/**
 * more_numbers - bla
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;
	int l;

	for (l = 0; l <= 10; l++)
	{
		for (i = 48; i <= 49; i++)
		{
			for (j = 0; j <= 57; j++)
			{
				if (i == 48)
					k = j;
				else
					k = i;

				_putchar(k);

				if (k == 1 && (j < 48 && j < 53))
					_putchar(j);
			}
		}
		_putchar('\n');
	}
}
