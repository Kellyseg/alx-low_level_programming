#include "main.h"
#include <string.h>

/**
 * puts2 - that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int a;
	int l;

	l = strlen(str);
	for (a = 0; a <= l - 1; a += 2)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
