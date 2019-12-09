#include "holberton.h"

/**
 * read_textfile - code
 * @filename: Char
 * @letters: Size_t
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	read_count = read(fd, buffer, letters);

	buffer[read_count] = '\0';

	if (read_count == -1)
	{
		free(buffer);
		return (0);
	}

	close(fd);

	write_count = write(STDOUT_FILENO, buffer, read_count);
		free(buffer);

	if (read_count != write_count)
		return (0);

	return (write_count);
}
