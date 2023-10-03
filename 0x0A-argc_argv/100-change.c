#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the amount of change
 * @argc: number of given arguments
 * @argv: arguments vector
 * Return: 0 - 1
 */

int main(int argc, char **argv)
{
	int i, j, sum;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
		printf("0\n");
	return (0);
}
