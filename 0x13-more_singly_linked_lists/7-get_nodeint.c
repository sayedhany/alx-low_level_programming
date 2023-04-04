#include "lists.h"
/**
 * get_nodeint_at_index - get index
 * @head: head
 * @index: index nedded
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int count;

	count = 0;
	if (!head)
		return (NULL);

	while (curr != NULL)
	{
		curr = curr->next;
		count++;
		if (count == index)
		{
			return (curr);
		}
	}
	return (NULL);
}
