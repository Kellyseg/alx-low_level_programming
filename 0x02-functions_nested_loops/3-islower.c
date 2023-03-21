#include "main.h"
#include <ctype.h>

/**
 * _islower - prints 1 if input is a lowercase
 *
 * @c: The character in ASCII code
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
