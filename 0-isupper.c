#include "main.h"

/**
 * _isupper - identify uppercase by printing 1 and 0 if otherwise
 *
 * @c: the character in ASCII code
 *
 * Return: always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
