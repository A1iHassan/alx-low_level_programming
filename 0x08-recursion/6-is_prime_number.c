#include "main.h"

/**
 * is_prime_number - checks if the input is a prime integer
 * @n: input number
 * Return: a value of the type int
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	if ((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0))
		return (1);
	return (0);
}
