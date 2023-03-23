#include "main.h"

/**
 * print_square -  print a square
 * @size: used to print size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int x;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
