#include "main.h"

/**
 * print_alphabet-x10 - print lowercases 10 times
 * description: 'print lowercase alphabets'
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 0; y <= 10; y++)
	{
		for  (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');

	}
}
