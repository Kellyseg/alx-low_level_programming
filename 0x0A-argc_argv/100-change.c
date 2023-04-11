#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _atoi(char *s);
/**
 * main - entry point
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 for two arguments
 * otherwise 1
 */
int main(int argc, char *argv[])
{
	int num;
	int count;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	count = 0;
	while (num > 0)
	{
		if (num >= 25)
		{
			num = num - 25;
		}
		else if (num < 25 && num >= 10)
		{
			num = num - 10;
		}
		else if (num < 10 && num >= 5)
		{
			num = num - 5;
		}
		else if (num < 5 && num >= 2)
		{
			num = num - 2;
		}
		else
		{
			num = num - 1;
		}
		count = count + 1;
	}
	printf("%d\n", count);
	return (0);
}
