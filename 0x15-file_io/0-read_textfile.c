#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *ptr;
	ssize_t nr, nw;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (!ptr)
		return (0);
	nr = read(fd, ptr, letters);
	if (nr < 0)
	{
		free(ptr);
		return (0);
	}
	ptr[nr] = '\0';

	close(fd);

	nw = write(STDOUT_FILENO, ptr, nr);
	if (nw < 0)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	return (nw);
}
