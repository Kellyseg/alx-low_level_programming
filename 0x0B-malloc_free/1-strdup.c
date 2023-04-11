#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - duplicates a string
 * @str: string
 *
 * Return: NULL if string is null or insufficient memory
 * if successful, returns pointer to duplicated string
 */
char *_strdup(char *str)
{
	size_t len = strlen(str); /* calculate length of input string */
	char *dup = malloc(len + 1); /* allocate memory for duplicate string */

	if (dup == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str); /* copy input string to duplicate string */
	return (dup);
}
