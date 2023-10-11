#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using another given function
 * @name: a given name
 * @f: the way the name will be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(1);
	f(name);
}
