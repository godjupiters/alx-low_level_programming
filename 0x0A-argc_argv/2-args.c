#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * @argc: variable holding the number of arguments
 * @argv: variable holding the value of array of arguments
 *
 * Return: Always 0 for (Success)
 */

int main(int argc, char *argv[])
{
	int cnt;

	while (cnt < argc)
	{
		printf("%s\n", argv[cnt]);
		cnt++;
	}
	{
		return (0);
	}
}
