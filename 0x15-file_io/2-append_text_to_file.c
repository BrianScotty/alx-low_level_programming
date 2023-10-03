#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file.
 * @filename: name of the file
 * @text_content: string of content to add
 * Return: 1 (success), -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	wrt = write(x, text_content, len);

	if (x == -1 || wrt == -1)
		return (-1);

	close(x);
	return (1);
}
