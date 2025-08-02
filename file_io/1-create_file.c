#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - Creates a file with given content and permissions.
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write into the file
 *
 * Return: 1 if success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t len;

		if (filename == NULL)
		{
			return (-1);
		}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	else
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
	}

	if (bytes_written == -1 || (size_t)bytes_written != len)
	{
		close(fd);
		return (-1);
	}

	if (close(fd) == -1)
	{
		return (-1);
	}

	return (1);
}
