#include "main.h"

/**
 * puts_half - bla
 * @str: bla
 */

void puts_half(char *str)
{
	int i;
	int j;

	while (*str[i] != '\0')
	{
		i++;
		str++;
	}

	for (j = i / 2; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
