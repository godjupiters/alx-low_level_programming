#include "main.h"

/**
 * puts2 - prototype function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string value variable
 * Return: str
 */

void puts2(char *str)
{
	int len = 0;

	int p = 0;
	char *z = str;
	int i;

	while (*z != '\0')
	{
		z++;
		len++;
	}
	p = len - 1;
	for (o = 0; o <= p; i++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}
