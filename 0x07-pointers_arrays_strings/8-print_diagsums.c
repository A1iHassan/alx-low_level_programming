#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - bla
 * @a: bla
 * @size: bla
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		i++;
	}

	i = size - 1;

	for (i >= 0)
	{
		sum2 += a[i * size + (size - i - 1)];
		i--;
	}

	printf("%d, %d\n", sum1, sum2);
}
