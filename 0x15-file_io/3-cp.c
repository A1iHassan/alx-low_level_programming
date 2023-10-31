#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * copy_file - copies content from file to file
 * @file_from: source
 * @file_to: destination
 * Return: a value of type int
 */

int copy_file(const char *file_from, const char *file_to)
{
	int fd_src, fd_dst;
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_src = open(file_from, O_RDONLY);
	if (fd_src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_dst = open(file_to, O_WRONLY | O_TRUNC);
	if (fd_dst < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_to);
		return (99);
	}
	if (fd_dst < 0)
	{
		fd_dst = open(file_to, O_WRONLY | O_CREAT);
		if (fd_dst < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't create file %s\n", file_to);
			return (99);
		}
	}
	while ((bytes_read = read(fd_src, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_dst, buffer, bytes_read);
		if (bytes_written < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			return (99);
		}
	}
	close(fd_src);
	close(fd_dst);

	return (0);
}

/**
 * main - program entry
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	result = copy_file(argv[1], argv[2]);
	exit(result);
	return (0);
}
