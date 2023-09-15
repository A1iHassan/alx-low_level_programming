#include <stdio.h>

/**
 * main - bla
 * Rescribtion: bla
 * Return: bla
 */

int main(void)
{
	int i;
	int count = 0;
	unsigned long long int num = 612852475143;

	for (i = 2; i < 700000000000; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			num /= i;
			count++;
		}
		if (count == 4)
		{
			break;
		}
	}
	return (0);
}
