#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raise to y
 * @x: base value/number
 * @y: power
 *
 * Return: result of raised power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y >= 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
