#include "main.h"
#include <stdio.h>

/**
 * err - detects currupted files
 * @source: given content
 * @dest: desired destination
 * @argv: arguments vector.
 */


void err(int source, int dest, char *argv[])
{
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program entry
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: a value of type int
 */


int main(int argc, char *argv[])
{
	int source, dest, i;
	ssize_t count, j;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err(source, dest, argv);

	count = 1024;
	while (count == 1024)
	{
		count = read(source, buffer, 1024);
		if (count == -1)
			err(-1, 0, argv);
		j = write(dest, buffer, count);
		if (j == -1)
			err(0, -1, argv);
	}

	i = close(source);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}

	i = close(dest);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	return (0);
}
