#include "lists.h"

/**
 * pop_listint - pop head
 * @head: head
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *next;
	int res;

	if (!head || !*head)
		return (0);
	next = curr->next;
	res = curr->n;
	*head = next;
	free(curr);
	return (res);
}
