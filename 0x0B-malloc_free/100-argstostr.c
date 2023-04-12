#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to string (success), NULL (failure)
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, n;
	int r = 0;
	int l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			l++;
		}
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
