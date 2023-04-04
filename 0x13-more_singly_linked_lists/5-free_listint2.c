#include "lists.h"

/**
 * free_listint2 - free listint
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *next;

	if (curr == NULL)
		return (0);
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*head = NULL;
}
