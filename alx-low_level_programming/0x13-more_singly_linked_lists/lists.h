#ifndef LISTS_H
#define LISTS_H

/* LIBRARIES */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/* STRUCTS */
/**
 * struct listint_s - A node list of integers
 * @n: The integer
 * @next: The next node
 *
 * Description: singly linked list node structure
 */
struct listint_s
{
	int n;
	struct listint_s *next;
};

/* TYPEDEFS */
typedef struct listint_s listint_t;

/* PROTOTYPES */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
