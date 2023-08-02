#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at a pos in the list
 * @head: Pointer to the list head
 * @index: The search index
 *
 * Return: The node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}

	return (head);
}
