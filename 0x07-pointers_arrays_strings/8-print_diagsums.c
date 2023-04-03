#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * 1st calculate sum of first diagonal
 * then,calculate sum of second diagonal
 * the print sums
 * @a: array
 * @size: array size
 *
 * Reeturn: always 0
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (x <= (size * size))
	{
		sum1 = sum1 + a[x];
		x = x + size + 1;
	}
	while (y < (size * size - 1))
	{
		sum2 += a[y];
		y = y + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
