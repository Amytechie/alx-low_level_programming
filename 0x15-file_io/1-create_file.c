#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * create_file - creates file
 * @filename: string for char variable
 * @text_content: string for second char variable
 * Return: the return value
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
	{
		return (-1);
	}

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t len = strlen(text_content);
		ssize_t nwritten = write(fd, text_content, len);

		if (nwritten == -1 || (size_t)nwritten != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
