#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print out alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
