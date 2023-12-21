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
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		close(fd);
		return (0);
	}
	nr = read(fd, ptr, letters);
	if (nr == -1)
	{
		free(ptr);
		close(fd);
		return (0);
	}
	nw = write(STDOUT_FILENO, ptr, nr);
	if (nw == -1 || (size_t)nw != (size_t)nr)
	{
		free(ptr);
		close(fd);
		return (0);
	}
	return (nr);
	close(nw);
	free(ptr);
}
