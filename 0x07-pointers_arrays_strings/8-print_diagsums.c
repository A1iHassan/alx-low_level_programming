#include "main"
#include <stdio.h>

/**
 * print_diagsums - bla
 * @a: bla
 * @size: bla
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1, sum2;

	while (i < size && j < size)
	{
		sum1 += a[i][j];
		i++;
		j++;
	}

	i = 0;
	j = size - 1;

	while (i < size && j >= 0)
	{
		sum2 += a[i][j];
		i++;
		j--;
	}
	printf("%d, %d", sum1, sum2);
}	
