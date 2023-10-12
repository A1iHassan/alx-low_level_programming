#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints given strings
 * @separator: filler between strings
 * @n: number of given strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *a;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(strings, char *);
		if (a != NULL)
			printf("%s", a);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
