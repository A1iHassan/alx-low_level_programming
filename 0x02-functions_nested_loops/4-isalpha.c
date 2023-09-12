#include "main.h"

/**
 * _isalpha - Entry
 * @c: bla bla
 * Describtion: bla bla
 * Return: bla bla
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
