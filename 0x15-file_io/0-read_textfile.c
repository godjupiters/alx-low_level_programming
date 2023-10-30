#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * read_textfile - a prototype function that reads the text of a file
 * @filename: varialble holding the name of file to be read
 * @letters: variable holding the chars to be read & printed
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdir;
	ssize_t lenRead, lenWrite;
	char *buff;

	if (filename == NULL)
		return (0);
	fdir = open(filename, O_RDONLY);
	if (fdir == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fdir);
		return (0);
	}
	lenRead = read(fdir, buff, letters);
	close(fdir);
	if (lenRead == -1)
	{
		free(buff);
		return (0);
	}
	lenWrite = write(STDOUT_FILENO, buff, lenRead);
	free(buff);
	if (lenRead != lenWrite)
		return (0);
	return (lenWrite);
}
