#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _atoi(char *s);
/**
 * main - entry point
 * @argv: argument vector/array
 * @argc: argument count
 *
 * Return: 0 if there are two arguments
 * otherwise 1
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	char *x;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		x = argv[i];
		for (; *x; x++)
		{
			if (!(*x >= '0' && *x <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int value = 0;
	int sign = 1;
	int l;

	l = strlen(s);
	if (l == 0)
	{
		return (0);
	}
	else
	{
		while (!(*s >= '0' && *s <= '9'))
		{
			if (*s == '-')
			{
				sign = sign * -1;
			}
			s++;
			l--;
		}
		if (l > 0)
		{
			while ((*s >= '0' && *s <= '9'))
			{
				value = (value * 10) + (*s - '0');
				s++;
			}
		}
		value = value * sign;
		return (value);
	}
}
