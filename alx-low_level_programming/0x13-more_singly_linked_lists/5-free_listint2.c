#include "lists.h"

/**
 * free_listint2 - Free linked list from memory
 * @head: Pointer ton Pointer to the head
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2(&((*head)->next));
		free(*head);
		*head = NULL;
	}
}
