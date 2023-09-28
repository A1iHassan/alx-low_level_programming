#include "main.h"

/**
 * _pow_recursion - calculates x to the power of y
 * @x: base
 * @y:power
 * Return: a value of type int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1));
}
