#include <stdio.h>

void start(void) __attribute__ ((constructor));

/**
 * start - a function that prints a sentence
 * before main function runs
 */

void start(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
