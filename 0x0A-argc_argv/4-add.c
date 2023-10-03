#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the sum of given numbers
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 - 1
 */

int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);
		if (**argv != '0' && j == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}
