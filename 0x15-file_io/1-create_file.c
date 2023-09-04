#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to create
 * @text_content: content of the file
 * Return: 1 (success), -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, wrd = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (wrd = 0; text_content[wrd];)
			wrd++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(fd, text_content, wrd);

	if (fd == -1 || i == -1)
		return (-1);

	close(fd);
	return (1);
}
