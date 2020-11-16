#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - read a text file and prints it to the POSIX stdout
 * @filename: name of the file
 * @letters: number of letters it should read and print.
 * Return: return the actual number of letters it could read and print
 * 0 if file cannot be opened or read.
 * 0 if filename is NULL.
 * 0 if write fails or does not write expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, checks_read, checks_write;
	char *c;

	if (filename == 0)
	{
		return (0);
	}

	c = malloc(letters + 1);

	if (c == 0)
	{
		return (0);
	}
	i = open(filename, O_RDONLY);

	if (i == -1)
	{
		return (free(c), 0);
	}

	checks_read = read(i, c, letters);
	if (checks_read == -1)
	{
		return (free(c), 0);
	}

	c[letters] = '\0';

	checks_write = write(STDOUT_FILENO, c, checks_read);
	if (checks_write == -1)
	{
		return (free(c), 0);
	}
	free(c);
	close(i);
	return (checks_write);
}
