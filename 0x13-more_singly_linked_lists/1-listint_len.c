#include "lists.h"

/**
 * listint_len - returns numbe of elements in list
 * @h: list
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
