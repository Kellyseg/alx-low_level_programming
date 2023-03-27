#include "main.h"
#include <string.h>
/**
 * rev_string - used to reverse a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l;
	int a;
	char *start;
	char *end;
	char ch;

	l = strlen(s);
	start = s;
	end = s + l - 1;
	for (a = 0; a <= (l - 1) / 2; a++)
	{
		ch = *end;
		*end = *start;
		*start = ch;

		start++;
		end--;
	}
}
