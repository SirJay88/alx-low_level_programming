#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[text_length])
			text_length++;

		bytes_written = write(fd, text_content, text_length);
		if (bytes_written != text_length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
