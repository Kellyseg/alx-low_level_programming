#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: functionto send name to
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
