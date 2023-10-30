#include "main.h"

/**
 * append_text_to_file - a prototype function that appends text to file
 * @filename: variable holding the name of file
 * @text_content: variable holding the content to add
 * Return: 1 if exist or -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdir;
	int nlet;
	int rewr;

	if (!filename)
		return (-1);
	fdir = open(filename, O_WRONLY | O_APPEND);
	if (fdir == -1)
		return (-1);
	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;
		rewr = write(fdir, text_content, nlet);

		if (rewr == -1)
			return (-1);
	}
	close(fdir);
	return (1);
}
