#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - Reads a text file and
* prints it to the POSIX standard output.
* @filename: Name of the file to read
* @letters: Maximum number of characters to read and print
*
* Return: Number of characters printed, or 0 if error
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t bytes_read = read(fd, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		return (0);
	}

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	free(buffer);

	return (bytes_written);
}
