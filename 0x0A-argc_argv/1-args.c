#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes the number of arguments that are passed to the program
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
