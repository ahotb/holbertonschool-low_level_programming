#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * copy_file - copies the content of a file to another file
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 *
 * Return: 0 on success, -1 on write error, -2 on read error
 */
int copy_file(int fd_from, int fd_to)
{
	char buffer[1024];
	int n_read, n_written;

	while ((n_read = read(fd_from, buffer, 1024)) > 0)
	{
	n_written = write(fd_to, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
		{
		return (-1);
		}
	}
	if (n_read == -1)
	{
		return (-2);
	}
	return (0);
}
/**
 * main - copies the content of a file to another file
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: 0 on success, or exits with error code (97-100) on failure
 */
int main(int argc, char *argv[])
{
	int fd_form, fd_to;
	int result;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_form = open(argv[1], O_RDONLY);
	if (fd_form == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	result = copy_file(fd_form, fd_to);
	if (result == -1)
	{
		close(fd_form);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (result == -2)
	{
		close(fd_form);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	if (close(fd_form) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_form), exit(100);
	return (0);
}
