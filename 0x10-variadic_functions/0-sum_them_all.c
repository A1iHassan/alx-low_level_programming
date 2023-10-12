#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of any number of given integers
 * @n: number of int
 * Return: a value of type int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		j += va_arg(args, int);
	return (j);
}
