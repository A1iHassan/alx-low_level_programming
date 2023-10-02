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
	(void)argc;
	printf("%s\n", argv[0]);
	while(argv++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
