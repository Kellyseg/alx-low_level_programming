#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: head node pointer
 * @index: node index
 *
 * Return: data at nth node
 * NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (index == counter)
		{
			return (head);
		}
		head = head->next;
		counter++;
	}
	return (NULL);
}
