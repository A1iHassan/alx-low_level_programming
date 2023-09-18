#include "main.h"

/**
 * print_rev - bla
 * @s: bla
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	while (i > 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
