#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node
 * @h: head
 * @idx: index
 * @n: value
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *resNode = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		if (resNode == NULL)
			return (NULL);
		resNode = resNode->next;
	}
	if (resNode->next == NULL)
		return (add_dnodeint_end(h, n));
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = resNode->next;
	newNode->prev = resNode;
	resNode->next->prev = newNode;
	resNode->next = newNode;

	return (newNode);
}
