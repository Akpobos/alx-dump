#include "lists.h"

/**
 * add_nodeint_end - Add node to end of list
 * @head: Pointer to Pointer to list
 * @n: Item to add
 * Return: Pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	if (!head)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (!(*head))
		*head = ptr;
	else
	{
		listint_t *h = *head;

		while (h->next)
			h = h->next;
		h->next = ptr;
	}
	return (ptr);
}
