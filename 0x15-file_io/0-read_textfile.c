#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX std out
 * @filename: pointer to file
 * @letters: letters to be read and printed
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	y = read(fd, str, letters);
	x = write(STDOUT_FILENO, str, y);

	free(str);
	close(fd);
	return (x);
}
