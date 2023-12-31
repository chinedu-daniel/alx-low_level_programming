#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: the name of the file to be appended
 * @text_content: the content to be appended
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int g;

	if (filename == NULL)
	return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		g = write(fd, text_content, len);
		if (g != len)
			return (-1);
	}
	close(fd);
	return (1);
}
