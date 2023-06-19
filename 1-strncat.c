#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenate two strings
 * @dest: string to cat
 * @src: string to be added
 * @n: number of bytes from src
 *
 * Return: concatenated dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
