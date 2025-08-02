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
	int fd;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	fd = open(filename, O_RDONLY);
	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
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
