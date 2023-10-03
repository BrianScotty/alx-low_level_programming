#include "main.h"

/**
 * read_textfile- reads a text file and prints it to POSIX STDOUT.
 * @filename: file to read
 * @letters: amount of letters
 * Return: amount of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t x;
	ssize_t wrt;
	ssize_t rd;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(x, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(x);
	return (wrt);
}
