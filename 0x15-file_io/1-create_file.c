#include "main.h"

/**
 * create_file - a prototype function that creates file
 * @filename: variable holding the name of file
 * @text_content: variable holding the file content
 * Return: 1 for success. -1 for fail.
 */

int create_file(const char *filename, char *text_content)
{
	int fdir;
	int nlet;
	int rewr;

	if (!filename)
		return (-1);
	fdir = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdir == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nlet = 0; text_content[nlet]; nlet++)
		;
	rewr = write(fdir, text_content, nlet);
	if (rewr == -1)
		return (-1);
	close(fdir);
	return (1);
}
