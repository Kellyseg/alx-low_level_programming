#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: full string
 * @needle: substring in full string
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *n = needle;
		char *h = haystack;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	haystack++;
	}
	return (NULL);
}
