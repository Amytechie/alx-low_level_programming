#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this function reads a text file and prints it to the POSIX standard output
 * @filename: a char string representing the file name
 * @letters: a variable that represents the letters
 * Return: houses the return value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char buffer = malloc(sizeof(char) letters);
	ssize_t bytes_read = read(fd, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytes_written);
}
