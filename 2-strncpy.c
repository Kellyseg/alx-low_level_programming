#include "main.h"
#include <string.h>

/**
 * *_strncpy - copy string
 * @src: points string to be copied
 * @dest: destination of copied string
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
