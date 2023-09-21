#include "main.h"

/**
 * leet -  prototype function that encodes a string into 1337.
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 *
 * @x: pointer variable
 * Return: x
 */

char *p(char *x)
{
	int a, b;
	char v1[] = "aAeEoOtTlL";
	char v2[] = "4433007711";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (x[a] == v1[b])
			{
				x[a] = v2[b];
			}
		}
	}

	return (x);
}

