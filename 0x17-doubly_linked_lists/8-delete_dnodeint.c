#include "lists.h"
/**
 * delete_dnodeint_at_index - delete
 * @head: head
 * @index: index
 * Return: 1 if ok, 0 if else
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *resNode = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = resNode->next;
		if (resNode->next == NULL)
			return (-1);
		resNode->next->prev = NULL;
		free(resNode);
		return (1);
	}

	while (count < index)
	{
		if (resNode->next == NULL)
			return (-1);
		resNode = resNode->next;
		count++;
	}
	resNode->prev->next = resNode->next;
	if (resNode->next == NULL)
		resNode->next->prev = resNode->prev;
	if (resNode->next == NULL)
	{
		p = resNode->prev;
		p->next = NULL;
		free(resNode);
		return (1);
	}
	free(resNode);
	return (1);
}
