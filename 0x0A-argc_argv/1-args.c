#include <stdio.h>

/**
 * main - entry point
 * @argv: argument vector/array
 * @argc: argument count
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	if (argc >= 0)
	printf("%d\n", argc - 1);
	return (0);
}
