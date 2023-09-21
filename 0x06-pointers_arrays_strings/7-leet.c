#include "main.h"

/**
 * leet - prototype function that encodes a string into 1337.
 * You can only use one if in your code
 * @x: variable to hold parameter
 * Return: x
 */

char *leet(char *x)
{
	int y, z;
	char v1[] = "aAeEoOtTlL";
	char v2[] = "4433007711";

	for (y = 0; x[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (x[y] == v1[z])
			{
				x[y] = v2[z];
			}
		}
	}
	{
	return (x);
	}
}
