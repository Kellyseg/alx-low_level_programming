#include <stdio.h>

/**
 * main - Entry point
 * print sum ofall multiples of 5 and 3 up to 1024
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, n = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			n += i;
		}
		i++;
	}
	printf("%d\n", n);
	return (0);
}
