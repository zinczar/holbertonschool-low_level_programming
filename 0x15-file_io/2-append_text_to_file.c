#include "holberton.h"

/**
 * append_text_to_file - code
 * @filename: Char
 * @text_content: Char
 *
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, content_len;
	ssize_t written = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	content_len = _strlen(text_content);
	written = write(fd, text_content, content_len);

	close(fd);

	if (written == -1)
		return (-1);

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
