#include "lists.h"

/**
 * add_nodeint - Adds a node to the begining of a linked list
 * @head: Pointer to Pointer to the head
 * @n: the new node
 *
 * Return: Address to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
