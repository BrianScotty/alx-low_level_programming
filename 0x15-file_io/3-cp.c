#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - creates a buffer.
 * @file: file to store string
 * Return: pointer to the buffer
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - closes file descriptors.
 * @fd: file descriptors
 */

void close_file(int fd)
{
	int x;

	x = close(fd);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another
 * @argc: amount of arguements
 * @argv: pointer to array of arguements
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b, x, y;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	a = open(argv[1], O_RDONLY);
	x = read(a, buf, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (a == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		y = write(b, buf, x);
		if (b == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		x = read(a, buf, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);
	free(buf);
	close_file(a);
	close_file(b);
	return (0);
}
