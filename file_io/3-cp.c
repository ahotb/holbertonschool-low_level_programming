#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exits with code on failure
 */
int main(int argc, char *argv[])
{
	int fd_form, fd_to;
	char buffer[1024];
	int n_read, n_written;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_form = open(argv[1], O_RDONLY);
	if (fd_form == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n_read = read(fd_form, buffer, 1024)) > 0)
	{
	n_written = write(fd_to, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
		{
		close(fd_to);
		close(fd_form);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}
	if (n_read == -1)
	{
		close(fd_to);
		close(fd_form);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	if (close(fd_form) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_form);
		exit(100);
	}
	return (0);
}
