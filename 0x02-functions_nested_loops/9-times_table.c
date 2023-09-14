#include "main.h"
#include <stdio.h>

/**
 * times_table - prototype function
 * Return: void
 */

void times_table(void)
{
	int r, c, output;

	for (r = 0 ; r < 10 ; r++)
	{
		for (c = 0 ; c < 10 ; c++)
		{
			output = r * c;
			if (c == 0)
				printf("%d, ", output);
			else
			{
				printf("%2d", output);
				if (r != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
