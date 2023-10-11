#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - does an operation over umbers
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: a value of type int
 */

int main(int argc, char **argv)
{
	int i, j, k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	k = (*get_op_func(argv[2]))(i, j);
	printf("%d\n", k);
	return (0);
}
