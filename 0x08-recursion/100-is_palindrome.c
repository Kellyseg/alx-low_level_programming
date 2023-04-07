#include "main.h"
#include <string.h>

int palindrome_check(char *s, char *ch);

/**
 * is_palindrome -  function tht identifies a palindrome
 * @s: string
 *
 * Return: 1 if string is a palindrome
 * otherwise 0
 */
int is_palindrome(char *s)
{
	int l = strlen(s);
	char *ch;

	ch = s;
	ch = ch + l - 1;

	return (palindrome_check(s, ch));
}

/**
 * palindrome_check - convert string to reverse form
 * @ch: string
 * @s: string
 *
 * Return: char *
 */
int palindrome_check(char *s, char *ch)
{
	if (*s != *ch)
	{
		return (0);
	}
	else if (*s && *ch)
	{
		return (palindrome_check(s + 1, ch - 1));
	}
	else
	{
		return (1);
	}
}
