#include "main.h"

/**
 * print_rev - bla
 * @s: bla
 */

void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	while (i > 0)
	{
		_putchar(*(s + i - 1));
		i--;
	}
	_putchar('\n');
}
