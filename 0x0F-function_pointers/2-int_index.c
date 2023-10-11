#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an int in an array of the typr int
 * @array: a given array
 * @size: array size
 * @cmp: function to be used
 * Return: index of the element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j == 1)
			return (i);
	}
	return (-1);
}
