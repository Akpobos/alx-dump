#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head
 * @idx: position
 * @n: the value to add
 * Return: new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *prev = NULL, *next = NULL;
	unsigned int i = 0;

	if (!head || (!(*head) && idx > 0))
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	next = *head;
	while (prev || next)
	{
		if (i == idx)
		{
			if (prev)
				prev->next = new;
			else
				*head = new;
			new->next = next;
			break;
		}
		i++;
		prev = next;
		if (next)
			next = next->next;
	}
	if (i != idx)
	{
		free(new);
		new = NULL;
	}
	return (new);
}
