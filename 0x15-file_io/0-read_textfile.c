#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- To read a text file and print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters that will be read
 * Return: w- number of bytes read and printed
 *        0 when a function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

