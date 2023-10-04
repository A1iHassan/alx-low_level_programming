#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a 2x2 array of int
 * @width: width
 * @height: height
 * Return: a value of type int *
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int k = height;
	int l = 0;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * height);

	if (a == NULL)
		return (NULL);

	while (l < k)
	{
		a[l] = malloc(sizeof(int) * width);
		l++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
