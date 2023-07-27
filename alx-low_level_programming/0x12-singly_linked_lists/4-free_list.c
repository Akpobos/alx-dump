#include "lists.h"

/**
 * free_list - Free a linked list
 * @head: Pointer to list head
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
			head->str = NULL;
		}
		free(head);
		head = NULL;
	}
}
