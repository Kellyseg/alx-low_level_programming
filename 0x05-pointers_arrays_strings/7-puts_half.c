#include "main.h"
#include <string.h>

/**
 * puts_half - print of a string
 * @str: string
 *
 * Return; void
 */
void puts_half(char *str)
{
	int a;
	int l;
	int thr;

	l = strlen(str);
	if (l % 2 != 0)
	{
		thr = (l / 2) + 1;
	}
	else
	{
		thr = l / 2;
	}
	for (a = thr; a < l; a++)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
