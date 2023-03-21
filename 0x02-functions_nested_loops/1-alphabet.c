#include "main.h"

/**
 * print_alphabet - make the  alphabet
 * description: 'print lowercase alphabets'
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
