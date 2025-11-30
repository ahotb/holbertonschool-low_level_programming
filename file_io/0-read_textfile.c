#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 *         0 if the file can not be opened or read,
 *         0 if filename is NULL,
 *         0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n_read;
	ssize_t n_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	n_read = read(fd, buffer, letters);
	if (n_read <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
		n_written = write(STDOUT_FILENO, buffer, n_read);
		free(buffer);
		close(fd);

	if (n_written != n_read)
	{
		return (0);
	}
		return (n_read);
}
