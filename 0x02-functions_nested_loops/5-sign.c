#include "main.h"

/**
 * print_sign - Entry
 * @n: bla
 * Describtion: bla bla
 * Return: bla bla
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('+');
	return (1);
}
