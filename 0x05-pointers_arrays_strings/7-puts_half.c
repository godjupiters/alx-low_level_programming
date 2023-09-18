#include "main.h"

/**
 * puts_half - prototype function that prints half of a string,
 * followed by a new line.
 * condition - If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: holds string to print half
 * Return: half string
 */

void puts_half(char *str)
{
	int m, n, len;

	len = 0;

	for (m = 0; str[m] != '\0'; m++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (m = n; str[m] != '\0'; m++)
		_putchar(str[m]);

	_putchar('\n');
}
