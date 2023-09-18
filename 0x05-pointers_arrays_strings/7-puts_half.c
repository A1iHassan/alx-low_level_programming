#include "main.h"

/**
 * puts_half - bla
 * @str: bla
 */

void puts_half(char *str)
{
	int length;
	int start;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
		start = (length - 1) / 2;
	else
		start = length / 2;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
