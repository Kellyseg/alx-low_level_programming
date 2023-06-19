#include "main.h"

/**
 * _isdigit - identify single digit and return 1
 * if otherwise,return 0
 *
 * @c: the character in ASCII
 *
 * Return: always 0 (success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
