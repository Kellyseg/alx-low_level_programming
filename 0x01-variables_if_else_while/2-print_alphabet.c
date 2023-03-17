#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print last digit of a random number and state if it is > 5, < 6 or 0
 * Return
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
