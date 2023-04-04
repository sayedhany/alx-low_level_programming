#include "lists.h"
/**
 * insert_nodeint_at_index - insert index
 * @head: head
 * @idx: index
 * @n: value
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr = *head;
	unsigned int i;

	if (!head)
		return (NULL);
	curr = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = curr;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1 && curr; i++)
		curr = curr->next;
	if (curr == NULL)
		return (NULL);
	new->next = curr->next;
	curr->next = new;

	return (new);
}
