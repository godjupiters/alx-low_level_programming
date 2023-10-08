#include <stdlib.h>
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
	char *new_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	new_strl = malloc(strlen(s1) + n + 1);

	if (new_strl == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		new_strl[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		new_strl[i] = s2[j];

	new_strl[i] = '\0';
	{
	return (new_strl);
	}
}
