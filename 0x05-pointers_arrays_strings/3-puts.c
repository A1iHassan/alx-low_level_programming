#include "main.h"

/**
 * _puts - bla
 * @str: bla
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
