#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * print first 52 finoacci numbers
 *
 * Return: always 0(success)
 */
int main(void)
{
	int x = 0;
	long j = 1, k = 2;

	while (x == 0)
	{
		if (x == 0)
		{
			printf("%ld",  j);
		}
		else if (x == 1)
		{
			printf(",%ld", k);
		}
		else
		{
			k += j;
			x = k - j;
			printf(",%ld", k);
		}
		++x;
	}
	printf("\n");
	return (0);
}

