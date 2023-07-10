#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- text file print to stdout
 * @filename: text file to be read
 * Return: w- actual number of bytes read and printed
 *  return 0 if the function fails or filename is null
 * @letters: total number of the letters to read
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
