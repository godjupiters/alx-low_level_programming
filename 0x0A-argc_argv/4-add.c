#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

/**
 * no_check -  a function that checks for strings
 * @stg: variable holding the array string
 * Return: Always 0 for (Success)
 */

int no_check(char *stg)
{
	unsigned int cnt;

	cnt = 0;
	while (cnt < strlen(stg))
	{
		if (!isdigit(stg[cnt]))
		{
			return (0);
		}
		{
			cnt++;
		}
	}
	{
		return (1);
	}
}

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
	int str_int;
	int total = 0;

	cnt = 1;
	while (cnt < argc)
	{
		if (no_check(argv[cnt]))
		{
			str_int = atoi(argv[cnt]);
			total += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		cnt++;
	}
	printf("%d\n", total);
	return (0);
}
