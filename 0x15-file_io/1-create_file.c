#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - bla
 * @s: bla
 * Return: bla
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

int create_file(const char *filename, char *text_content)
{
	int fd;
	struct stat st;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	if (stat(filename, &st) == 0)
		fd = open(filename, O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, mode);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written != _strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
