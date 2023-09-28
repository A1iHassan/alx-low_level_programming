#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: a positive or negative integer
 * Return: a value of type int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
