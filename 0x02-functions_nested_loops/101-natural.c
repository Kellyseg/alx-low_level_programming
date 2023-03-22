#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int sum = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0)
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum);
}
