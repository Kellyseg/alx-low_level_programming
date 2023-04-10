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
		if (argc >= 1)
		printf("%s\n", argv[0]);
		return (0);
}
