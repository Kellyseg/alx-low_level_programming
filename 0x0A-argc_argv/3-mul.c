#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: argument vector/array
 * @argc: argument count
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	printf("%i\n", product);

	return (0);
}
