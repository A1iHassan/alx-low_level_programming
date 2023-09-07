#include <unistd.h>
#include <string.h>
/**
 *
 * main - Entry
 *
 * Describtion: bla bla bla
 *
 * Return: bla bla bla
 */
int main(void)
{
	const char message[300] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t message_length = strlen(message);
	ssize_t bytes_written = write(STDERR_FILENO, message, message_length);
	if (bytes_written == -1)
	{
		perror("write");
		return 1;
	}
	return 0;
}
