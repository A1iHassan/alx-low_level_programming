#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes all passed arguments
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i ++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
