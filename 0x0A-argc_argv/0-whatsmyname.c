#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.]
 * @argc: variable holding number of arguments
 * @argv: variable holding the array of arguments
 *
 * Return: Always 0 for (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	{
		return (0);
	}
}
