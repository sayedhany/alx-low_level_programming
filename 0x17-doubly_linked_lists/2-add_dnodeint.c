#include "lists.h"
/**
 * add_dnodeint - add node at the beganning of list
 * @head: pointer to the head
 * @n: value
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *curr;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->prev = NULL;
	newNode->n = n;
	curr = *head;
	if (curr != NULL)
	{
		while (curr->prev != NULL)
			curr = curr->prev;
	}
	newNode->next = curr;

	if (curr != NULL)
		curr->prev = newNode;
	*head = newNode;
	return (newNode);
}
