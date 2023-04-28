#include <stdio.h>

void start(void)__attribute__((constructor));

/**
 * start - print a sentence before main function
 * is executed
 *
 * Return: nothing
 */
void start(void)
{
	printf("You're beat! and yet, you must allow'\n");
	printf("I bore my house upon my back!\n");
}
