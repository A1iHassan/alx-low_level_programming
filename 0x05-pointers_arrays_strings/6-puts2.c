#include "main.h"

/**
 * puts2 - bla
 * @str: bla
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		i++;
	}

	while (j <= i)
	{
		if (j % 2 == 0)
			if (str[j] == '\0')
				continue;
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
