#include "lists.h"
/**
 * add_dnodeint_end - add node to the end
 * @head: pointer to another
 * @n: value
 * Return: address for new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	last = *head;

	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	newNode->prev = last;

	return (newNode);
}
