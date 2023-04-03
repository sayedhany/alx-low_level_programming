#include "lists.h"
/**
 * add_nodeint - add node
 * @head: address of node
 * @n: new value
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (0);
	new_element->n = n;
	new_element->next = *head;
	*head = new_element;
	return (new_element);

}
