#include "main.h"

/**
 * puts_half - bla
 * @str: bla
 */

void puts_half(char *str)
{
	if (str == NULL) {
		return;
	}

	int length = 0;

	while (str[length] != '\0') {
		length++;
	}

	int start;

	if (length % 2 == 0) {
		start = length / 2;
	} else {
		start = (length - 1) / 2;
	}

	for (int i = start; i < length; i++) {
		_putchar(str[i]);
	}

	_putchar('\n');
}
