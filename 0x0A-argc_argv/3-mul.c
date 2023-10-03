#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the multiplication of two given numbers
 * @argc: number of given arguments
 * @argv: arguments vector
 * Return: 0 - 1
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	} else {
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
}
