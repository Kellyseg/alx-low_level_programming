#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create array of integers
 * @max: largest integer in array
 * @min: smallest integer in array
 *
 * Return: pointer to newly created array
 * NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *ar;
	int j = 0;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int) * (max - min + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ar[j] = i;
		j++;
	}
	return (ar);
}
