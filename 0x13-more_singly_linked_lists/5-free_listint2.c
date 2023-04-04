#include "lists.h"

/**
 * free_listint2 - free listint
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;

	while (*head)
	{
		listint_t *tem = *head;
		*head = (*head)->next;
		free(tem);
	}
	*head = NULL;
}
