#include <stdlib.h>

/**
 * array_range - creates an array of given values
 * @min: start value
 * @max: finish value
 * Return: a value of type int *
 */

int *array_range(int min, int max)
{
	int *a;
	int i = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return ((int *)a);
}
