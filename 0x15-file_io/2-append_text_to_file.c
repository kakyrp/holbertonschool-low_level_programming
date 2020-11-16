#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to write to a file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, check_write, l = 0;

	if (filename == 0)
	{
		return (-1);
	}

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[l] != 0)
		{
			l++;
		}
		check_write = write(i, text_content, l);

		if (check_write == -1)
		{
			return (-1);
		}
	}
	close(i);
	return (1);
}
