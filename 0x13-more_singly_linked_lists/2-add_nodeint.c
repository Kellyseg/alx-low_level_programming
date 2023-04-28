#include "lists.h"

/**
 * add_nodeint - add new node at list beginning
 * @head: head node of list
 * @n: data to add
 *
 * Return: address of new element
 * NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
