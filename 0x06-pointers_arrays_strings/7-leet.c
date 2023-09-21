#include "main.h"

/**
 * leet - prototype function that encodes a string into 1337.
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * @x: pointer variable
 * Return: x
 */

char *leet(char *n)
{
	int k, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
	for (r = 0; r < 10; r++)
	{
	if (n[k] == s1[r])
	{
	n[k] = s2[r];
	}
	}
	}
	return (n);
}
