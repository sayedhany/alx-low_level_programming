#include "lists.h"
/**
 * reverse_listint - return sum
 * @head: head node
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *node;

	if (!head || !*head)
		return (*head);

	prev = 0;

	while (*head)
	{
		node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = node;
	}
	*head = prev;
	return (*head);
}
