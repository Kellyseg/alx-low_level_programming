#include "main.h"
int _pow(int i, int j);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to find its square root
 *
 * Return: square root result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow(n, 0));
	}
}
/**
 * _pow - check for square root
 * @i: valid sqaure to check
 * @j: integer
 *
 * Return: square root or -1
 */
int _pow(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	else if (j * j == i)
	{
		return (j);
	}
	else
	{
		return (_pow(i, j + 1));
	}
}
