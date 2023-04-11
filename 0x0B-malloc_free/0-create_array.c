#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array -  a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char that starts the array
 *
 * Return: NULL if size = 0
 * if NULL fails return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
