#include "lists.h"

/**
 * delete_nodeint_at_index - As the name says of a linked list
 * @head: Pointer to pointer to the head
 * @index: The index
 *
 * Return: 1 if successful else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev_node = NULL;
	int check = -1;

	if (!head || !(*head) || index < 0)
		return (check);
	while (*head)
	{
		if (i == index)
		{
			listint_t *tmp = *head;

			if (prev_node)
			{
				prev_node->next = (*head)->next;
			}
			else
			{
				*head = (*head)->next;
			}
			free(tmp);
			check = 1;
			break;
		}
		prev_node = *head;
		head = &(*head)->next;
		i++;
	}
	return (check);
}
