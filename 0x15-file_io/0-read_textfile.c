#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - reads texts from a given file
 * @filename: the given file name
 * @letters: number of desired letters
 * Return: a value of type ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024 * 8];
	int i;
	ssize_t count;

	if (!filename || !letters)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	count= read(i, &buffer[0], letters);
	count = write(STDOUT_FILENO, &buffer[0], count);

	close(i);
	return (count);
}
