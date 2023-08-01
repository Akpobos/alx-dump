#include "lists.h"

/**
 * free_listint - Frees a listnode memory
 * @head: Pointer to the node list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
		head = NULL;
	}
}
