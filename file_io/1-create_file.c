#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file and writes text_content to it
 * @filename: pointer to the name of the file to be created
 * @text_content: pointer to a string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int n_written;
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
	}
	n_written = write(fd, text_content, len);
	if (n_written != len || n_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
