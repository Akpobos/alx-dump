#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to head
 * @n: the value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		listint_t *temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
