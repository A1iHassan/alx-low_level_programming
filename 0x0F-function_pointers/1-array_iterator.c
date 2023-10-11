#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - execute a given function on a given array
 * @array: the given array
 * @size: array size
 * @action: the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size == 0 || action == NULL)
		exit(1);

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
