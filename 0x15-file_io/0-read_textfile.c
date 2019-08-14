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
	int fd, read_count, write_count;
	char *buffer = malloc(sizeof(char) * letters);

	if (!buffer || !filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_count = read(fd, buffer, letters);

	if (read_count == -1)
	{
		free(buffer);
		return (0);
	}
	write_count = write(STDOUT_FILENO, buffer, read_count);

	if (write_count == -1)
	{
		free(buffer);
		return (0);
	}

	if (read_count != write_count)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (write_count);
}
