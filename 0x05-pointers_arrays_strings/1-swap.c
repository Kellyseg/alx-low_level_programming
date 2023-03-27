#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: integer that will be swapped
 * @b: integer that will be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n1 = *a;
	int n2 = *b;

	*a = n2;
	*b = n1;
}
