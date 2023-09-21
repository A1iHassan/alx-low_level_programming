#include "main.h"

/**
 * reverse_array - bla
 * @a: bla
 * @n: bla
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n / 2); i++)
		a[i] = a[n-i];
}
