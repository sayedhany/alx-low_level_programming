#include "lists.h"

/**
 * free_listint2 - free listint
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	if (!head || !*head)
		return;

	while (*head)
	{
		listint_t *tem = curr;
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
