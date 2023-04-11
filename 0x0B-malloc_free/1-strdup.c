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
	char *ar;
	unsigned int i = 0;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	ar = malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		ar[j] = str[j];
	}

	return (ar);
}
