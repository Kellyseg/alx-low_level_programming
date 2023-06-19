#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to find
 *
 * Return: a pointer to first occurrence of c in s
 * and NULL is c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
