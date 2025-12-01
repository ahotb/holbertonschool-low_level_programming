#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the string to add to the end of the file
 * Return: 1 on success, -1 on failure
 *         -1 if the file does not exist or if filename is NULL
 *         -1 if write fails
	*/
	int append_text_to_file(const char *filename, char *text_content)
	{
		int fd;
		int len;
		int n_writee;

		if (filename == NULL)
			return (-1);

		if (text_content == NULL)
		{
			fd = open(filename, O_WRONLY | O_APPEND);
			if (fd == -1)
			{
				return (-1);
			}
				close(fd);
				return (1);
		}
		else
		{
			fd = open(filename, O_WRONLY | O_APPEND);
			if (fd == -1)
			{
				return (-1);
			}
			len = strlen(text_content);
			n_writee = write(fd, text_content, len);
			if (n_writee == -1 || n_writee != len)
			{
				close(fd);
				return (-1);
			}
				close(fd);
				return (1);
		}

	}
