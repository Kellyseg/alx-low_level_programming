#include "main.h"
#include <ctype.h>

/**
 * _isalpha - print 1 if input is an alphabet
 *
 * @c: the charater in ASCII code
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
