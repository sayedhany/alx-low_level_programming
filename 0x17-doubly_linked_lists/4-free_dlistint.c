#include "lists.h"
/**
 * free_dlistint - free list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *temp;

	curr = head;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}
