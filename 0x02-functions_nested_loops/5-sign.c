#include "main.h"

/**
 * print_sign - indicate if an inpute number is <, > or = 0
 *
 * @n: the input number is an integer
 *
 * Return: -1 if negative, 1 if positive, 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
