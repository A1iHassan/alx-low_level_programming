#include "main.h"

/**
 * reverse_array - bla
 * @a: bla
 * @n: bla
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = a[i];
	}

}
