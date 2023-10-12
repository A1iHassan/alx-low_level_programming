#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints given numbers to stdout
 * @separator: filler between numbers
 * @n: number of given integers
 * Return: a value of type int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1)
			printf("%s", (separator ? separator : NULL));
	}
	printf("\n");
}
