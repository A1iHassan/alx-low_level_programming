#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - writes the name of the program
 * @argc: number of given arguments
 * @argv: given arguments vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
