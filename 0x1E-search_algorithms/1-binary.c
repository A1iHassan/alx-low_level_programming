#include "search_algos.h"

/**
 * print_array - prints the array in a single line
 * @array: pointer to the first element of the array to print
 * @size: number of elements in array
 *
 * Return: void
*/

void print_array(int *array, size_t size)
{
	size_t i = size;

	while (size)
	{
		printf("%d", array[i - size--]);
		if (size)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		print_array(array + left, right + 1 - left);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
