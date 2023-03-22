#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * print first 52 fibonacci numbers
 *
 * Return: always 0(success)
 */
int main(void)
{
	int x = 0;
	long j = 1, k = 2;

	while (x < 50)
	{
		if (x == 0)
		{
			printf("%ld", j);
		}
		else if (x == 1)
		{
			printf(", %ld", k);
		}
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++x;
	}
	printf("\n");
	return (0);
}

