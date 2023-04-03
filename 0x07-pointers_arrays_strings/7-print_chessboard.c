#include "main.h"
#include <string.h>

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array row
 *
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			if (y == 7)
			{
				_putchar(a[x][y]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[x][y]);
			}
		}
	}
}
