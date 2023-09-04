#include "main.h"

/**
 * read_textfile - reads a text file and displays text
 * @filename: name of the file to read
 * @letters: letters to be printed
 * Return: letters printed, or 0 (failure)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i, j;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	i = read(fd, buffer, letters);
	j = write(STDOUT_FILENO, buffer, i);

	close(fd);
	free(buffer);
	return (j);
}
