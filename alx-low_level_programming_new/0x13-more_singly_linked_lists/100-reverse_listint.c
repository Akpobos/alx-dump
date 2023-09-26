#include "lists.h"

/**
 * _rev_listint - reverse list
 * @curr: current node
 * @prev: previous node
 * Return: last node
 */
listint_t *_rev_listint(listint_t *curr, listint_t *prev)
{
	listint_t *h = NULL;

	if (!(curr->next))
	{
		curr->next = prev;
		return (curr);
	}
	h = _rev_listint(curr->next, curr);
	curr->next = prev;
	return (h);
}

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	*head = _rev_listint(*head, NULL);
	return (*head);
}
