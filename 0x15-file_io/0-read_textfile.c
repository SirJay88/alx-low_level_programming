#include "main.h"
#include <stdio.h>
/**
 * print_file - Reads and prints the contents of a file to standard output.
 * @filename: The name of the file to read.
 *
 * Return: If successful - the number of characters printed. Otherwise - 0.
 */
ssize_t print_file(const char *filename)
{
	char buf[BUFSIZ];
	int fd, read_size;
	ssize_t total = 0;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while ((read_size = read(fd, buf, BUFSIZ)) > 0)
	{
		if (write(STDOUT_FILENO, buf, read_size) != read_size)
		{
			close(fd);
			return (0);
		}
		total += read_size;
	}

	close(fd);

	return (total);
}
