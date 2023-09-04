#include "main.h"

/**
 * append_text_to_file - adds new text to the end of the file
 * @filename: file name
 * @text_content: text to add
 * Return: 1 (success), -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, insrt, wrd = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (wrd = 0; text_content[wrd];)
			wrd++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	insrt = write(o, text_content, wrd);

	if (o == -1 || insrt == -1)
		return (-1);

	close(o);
	return (1);
}
