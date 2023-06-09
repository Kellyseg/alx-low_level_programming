#include <stdlib.h>
#include <stdio.h>

/**
 * main- print Fizz Buzz program
 * replace multiples of 3 with fizz
 * multiples of 5 with buzz
 * multiples of both with fizzbuzz
 * end at 100
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i  <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
