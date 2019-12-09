#include "holberton.h"

/**
 * create_file - code
 * @filename: Int
 * @text_content: Char
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, content_len;
	ssize_t written = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	content_len = _strlen(text_content);
	written = write(fd, text_content, content_len);

	if (written == -1)
		return (-1);

	close(fd);

	return (1);
}

/**
 * _strlen - code
 * @s: Char
 *
 * Return: Count
 */
int _strlen(const char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}
