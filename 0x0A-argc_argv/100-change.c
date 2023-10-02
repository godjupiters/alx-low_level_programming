#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: variable holding the number of arguments
 * @argv: variable holding the value of the array of arguments
 *
 * Return: 0 for (Success) or  1 for (Error)
 */

int main(int argc, char *argv[])
{
	int no, k, outcom;
	int cns[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		{
			return (1);
		}
	}

	no = atoi(argv[1]);
	outcom = 0;

	if (no < 0)
	{
		printf("0\n");
		{
			return (0);
		}
	}

	for (k = 0; k < 5 && no >= 0; k++)
	{
		while (no >= cns[k])
		{
			outcom++;
			no -= cns[k];
		}
	}

	printf("%d\n", outcom);
	{
		return (0);
	}
}
