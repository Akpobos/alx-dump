#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list
 * @head: pointer to head
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int is_deleted = -1;
	unsigned int i = 0;
	listint_t *prev = NULL, *next = NULL;

	if (!head || !(*head))
		return (-1);
	next = *head;
	while (next)
	{
		if (i == index)
		{
			if (prev)
				prev->next = next->next;
			else
				*head = next->next;
			free(next);
			next = NULL;
			is_deleted = 1;
			break;
		}
		i++;
		prev = next;
		next = next->next;
	}
	return (is_deleted);
}
