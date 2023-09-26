#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head
 * @index: index of the node to get
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = NULL;

	if (!head)
		return (NULL);
	while (head->next && !node)
	{
		if (i == index)
			node = head;
		else
		{
			i++;
			head = head->next;
		}
	}
	return (node);
}
