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
	char *dup = (char *)malloc(len + 1); /* allocate memory for duplicate string */
	dup[len] = '\0';

	if (str == NULL || dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str); /* copy input string to duplicate string */
	return (dup);
}
