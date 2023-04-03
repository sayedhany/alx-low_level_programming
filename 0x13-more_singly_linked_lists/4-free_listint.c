#include "lists.h"

/**
 * free_listint - free malloc
 * @head: linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
