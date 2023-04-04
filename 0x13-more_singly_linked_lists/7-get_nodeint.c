#include "lists.h"
/**
 * get_nodeint_at_index - get index
 * @head: head
 * @index: index nedded
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
