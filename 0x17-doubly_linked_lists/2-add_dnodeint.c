#include "lists.h"
/**
 * add_dnodein - add node at the beganning of list
 * @head: pointer to the head
 * @n: value
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr, *newNode;

	curr = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = curr;

	curr = newNode;
	return (newNode);
}
