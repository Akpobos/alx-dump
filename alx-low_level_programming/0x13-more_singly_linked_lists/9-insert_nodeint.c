#include "lists.h"

/**
 * insert_node - Inserts a node at a given position
 * @prev_node: Previous node on the list
 * @curr_node: Current node on the list
 * @new_node: The new_node to add
 * @idx: Index at which the node should be added
 * @curr_idx: The current index in the iteration
 * Return: Nothing
 */
void insert_node(
		listint_t **prev_node,
		listint_t **curr_node,
		listint_t **new_node,
		unsigned int idx,
		unsigned int curr_idx
		)
{
	if (!(*curr_node) && curr_idx > 0 && idx > curr_idx)
	{
		free(*new_node);
		*new_node = NULL;
		return;
	}

	if (curr_idx == idx)
	{
		(*new_node)->next = *curr_node;
		if (curr_idx == 0)
			*curr_node = *new_node;
		if (*prev_node)
			(*prev_node)->next = *new_node;
		return;
	}
	insert_node(&(*curr_node), &(*curr_node)->next, new_node, idx, curr_idx + 1);
}

/**
 * insert_nodeint_at_index - Exactly what the name says
 * @head: pointer to pointer to the list head
 * @idx: The index
 * @n: the Data
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;

	if (!head || (!(*head) && idx > 0))
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	insert_node(NULL, head, &ptr, idx, 0);
	return (ptr);
}
