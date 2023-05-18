#include "lists.h"
/**
 * add_dnodeint_end - add node to the end
 * @head: pointer to another
 * @n: value
 * Return: address for new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *curr, *newNode;
	
	curr = *head;
	last = curr->next;
	while (last != NULL)
	{
		curr = last;
		last = last->next;
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = curr;

	return (newNode);

}
