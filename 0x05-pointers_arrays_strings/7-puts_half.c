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

	while (str[length] != '\0') {
		length++;
	}

	start = length / 2;

	for (i = start; i < length; i++) {
		_putchar(str[i]);
	}

	_putchar('\n');
}
