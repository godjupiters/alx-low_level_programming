#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

void flagio(int sys, int fdir, char *filename, char mod);

/**
 * main - a function that call copy from one file to file
 * @argcount: variable holding the argument count
 * @argpassed: variable holding the argument checked
 * Return: 1 for success or terminate
 */

int main(int argcount, char *argpassed[])
{
	int srce, des, startread = 1024, startwrite, end_srce, end_des;
	unsigned int mod = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (argcount != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	srce = open(argpassed[1], O_RDONLY);
	flagio(srce, -1, argpassed[1], 'O');
	des = open(argpassed[2], O_WRONLY | O_CREAT | O_TRUNC, mod);
	flagio(des, -1, argpassed[2], 'W');
	while (startread == 1024)
	{
		startread = read(srce, buff, sizeof(buff));
		if (startread == -1)
			flagio(-1, -1, argpassed[1], 'O');
		startwrite = write(des, buff, startread);
		if (startwrite == -1)
			flagio(-1, -1, argpassed[2], 'W');
	}
	end_srce = close(srce);
	flagio(end_srce, srce, NULL, 'C');
	end_des = close(des);
	flagio(end_des, des, NULL, 'C');
	return (0);
}

/**
 * flagio - a function that checks file can open or not
 * @sys: variable holding the file descriptor to be opened
 * @fdir: variable holding the file descriptor
 * @filename:  variable holding the name of file
 * @mod: variable holding the action, close or open
 * Return: VOID
 */

void flagio(int sys, int fdir, char *filename, char mod)
{
	if (mod == 'C' && sys == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdir %d\n", fdir);
		exit(100);
	}
	else if (mod == 'O' && sys == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mod == 'W' && sys == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
