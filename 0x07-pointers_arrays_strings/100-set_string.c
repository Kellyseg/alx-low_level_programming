#include "main.h"
#include <string.h>

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: value the pointer will be changed to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
