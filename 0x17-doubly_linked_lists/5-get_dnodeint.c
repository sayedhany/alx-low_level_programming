#include "lists.h"
/**
 * get_dnodeint_at_index - get element
 * @head: head of list
 * @index: index
 * Return: element of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr, *dist;
	unsigned int count;

	curr = head;
	count = 0;

	while (curr != NULL)
	{
		if (count == index)
		{
			dist = curr;
			curr = curr->next;
			count++;
			return (dist);
		}
		else
		{
			curr = curr->next;
			count++;
			continue;
		}
	}
	return (NULL);
}
