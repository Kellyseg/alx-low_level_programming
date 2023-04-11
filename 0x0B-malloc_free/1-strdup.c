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
	int i = 0;
	char *dup = malloc(sizeof(char) * (i +1));
	int r;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	if (dup == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		dup[r] = str[r];
	}

	dup[r] = '\0';

	return (dup);
}
