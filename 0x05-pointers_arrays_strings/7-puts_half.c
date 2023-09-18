#include "main.h"

/**
 * puts_half - bla
 * @str: bla
 */

void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	if (i % 2 == 0)
	{
		while (i > (i / 2))
		{
			_putchar(str[i]);
			i--;
		}
	} else {
		while (i < ((i - 1) / 2))
		{
			_putchar(str[i]);
			i--;
		}
	}
	_putchar('\n');
}
