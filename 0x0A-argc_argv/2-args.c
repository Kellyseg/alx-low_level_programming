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
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n",*(argv + count));
	}
	return (0);
}
