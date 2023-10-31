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

/**
 * append_text_to_file - appends given text at the end of a given file
 * @filename: desired file
 * @text_content: content to append
 * Return: a value of type int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	struct stat st;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (stat(filename, &st) < 0)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written != _strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
