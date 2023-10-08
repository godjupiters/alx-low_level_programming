#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - a prototype function that concatenates two strings.
 * @s1: variable 1 holding the string to append
 * @s2: variable 2 holding the string to concatenate
 * @n: variable holding the number of bytes from s2 concatenate s1
 * Return: resulting pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, length1 = 0, lenght2 = 0;

	while (s1 && s1[lenght1])
		lenght1++;
	while (s2 && s2[lenght2])
		lenght2++;

	if (n < lenght2)
		s = malloc(sizeof(char) * (lenght1 + n + 1));
	else
		s = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

	if (!s)
	{
		return (NULL);
	}

	while (a < lenght1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < lenght2 && a < (lenght1 + n))
		s[a++] = s2[b++];

	while (n >= lenght2 && a < (lenght1 + lenght2))
		s[a++] = s2[b++];

	s[a] = '\0';

	{
	return (s);
	}
}
