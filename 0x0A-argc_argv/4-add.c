#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
/**
 * main -  a program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * @argc: variable holding the number of arguments
 * @argv: variable holding the arguments
 * Return: Always 0 for (Success)
 */
int main(int argc, char *argv[])
{
	int cnt;
	long str_int;
	int total = 0;
	char *endptr;

	cnt = 1;
	while (cnt < argc)
	{
		errno = 0;
		str_int = strtol(argv[cnt], &endptr, 10);
		if (errno == ERANGE && (str_int == LONG_MAX || str_int == LONG_MIN))
		{
			perror("strtol");
			return (1);
		}
		if (errno != 0 && str_int == 0)
		{
			perror("strtol");
			return (1);
		}
		if (endptr == argv[cnt])
		{
			fprintf(stderr, "No digits were found\n");
			return (1);
		}
		total += str_int;
		{
			printf("Error\n");
			return (1);
		}
		cnt++;
	}
	printf("%d\n", total);
	return (0);
}
