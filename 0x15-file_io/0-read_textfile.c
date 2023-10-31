#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads texts from a given file
 * @filename: the given file name
 * @letters: number of desired letters
 * Return: a value of type ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[BUFSIZ];
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	while (bytes_read < letters &&
			(bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd);
			return (0);
		}

		bytes_read += bytes_written;
	}

	close(fd);

	return (bytes_read);
}

