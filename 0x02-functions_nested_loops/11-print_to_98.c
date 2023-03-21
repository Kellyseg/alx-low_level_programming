#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print natural numbers from n to 98
 *
 * @n: number to start printing from
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%d\n", 98);
}
