#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenate two strins
 * @s1: first string
 * @s2: string to be added to s1
 * Return: pointer to newly allocated space contains the contents of s1
 * followed by contents of s2 and null terminated  return NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *s3;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[s1len])
	s1len++;
	while (s2[s2len])
	s2len++;
	s3 = malloc(sizeof(char) * (s1len + s2len + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	while (i < s1len)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < s1len + s2len)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
