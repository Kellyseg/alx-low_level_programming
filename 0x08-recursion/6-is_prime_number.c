#include "main.h"
int prime_checker(int i, int j);

/**
 * is_prime_number - a function that identifies prime numbers
 * @n: number
 *
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */
int is_prime_number(int n)
{
	int checker;

	if (n <= 1)
	{
		return (0);
	}
	checker = prime_checker(n, (n - 1));
	return (checker);
}

/**
 * prime_checker - tests if a numder is a prime number
 * @i: number to test
 * @j: number used to divide
 *
 * Return: 1 if the input integer is a prime number
 * otherwise 0
 */
int prime_checker(int i, int j)
{
	if  (j == 1)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	else
	{
		return (prime_checker(i, j - 1));
	}
}
