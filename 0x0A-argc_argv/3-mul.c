#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: variable holding the number of arguments
 * @argv: variable holding the value of the array of arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int outcom, val1, val2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	val1 = strtol(argv[1], NULL, 10);
	val2 = strtol(argv[2], NULL, 10);
	outcom = val1 * val2;

	printf("%d\n", outcom);

	{
		return (0);
	}
}
