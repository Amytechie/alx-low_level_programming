#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text to file
 * @filename: char string
 * @text_content: char string
 * Return: the return value
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");
	size_t len = strlen(text_content);
	size_t written = fwrite(text_content, sizeof(char), len, file);

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (access(filename, F_OK == 0 ? 1 : -1));
	}

	if (file == NULL)
	{
		return (-1);
	}

	fclose(file);

	return (written == len ? 1 : -1);
}
