#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns string length
 * @s: string
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int 1 = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - adds a new node at the beginning of list
 * @head: node address
 * @str: string
 *
 * Return: address of new element
 * NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
