#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concat two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes from s2
 * to concat to s1
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int m, p, len;
	unsigned int i = 0;
	unsigned int k = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[i])
	i++;
	while (s2[j])
	j++;
	if (j > n)
	{
		j = n;
	}
	len = i + j;


	ar = malloc(sizeof(char) * (len + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < i; p++)
	{
		ar[k++] = s1[p];
	}
	for (m = 0; m < j; m++)
	{
		ar[k++] = s2[m];
	}
	ar[k] = '\0';
	return (ar);
}
