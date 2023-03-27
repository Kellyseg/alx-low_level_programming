#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;
	int a;

	l = strlen(s);
	for (a = l - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
