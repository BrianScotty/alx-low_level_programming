#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: NULL terminated string
 * Return: 1 (success), -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int x, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(x, text_content, len);

	if (x == -1 || wrt == -1)
		return (-1);

	close(x);
	return (1);
}
