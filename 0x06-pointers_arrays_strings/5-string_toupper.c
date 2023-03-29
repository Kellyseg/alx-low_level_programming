#include "main.h"
#include <string.h>

/**
 * *string_toupper - change lowercase to uppercase
 * @s: string
 * Return: char *
 */
char *string_toupper(char *s)
{
	int i;
	int a;
	int l;

	l = strlen(s);
	for (a = 0; a < l; a++)
	{
		i = *(s + a);
		if (i >= 97 && i <= 122)
		{
			i = i - 32;
		}
		*(s + a) = i;
	}
	return (s);
}
