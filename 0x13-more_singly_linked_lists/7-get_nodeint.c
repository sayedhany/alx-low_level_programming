#include "lists.h"
/**
 * get_nodeint_at_index - get index
 * @head: head
 * @index: index nedded
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count;

	count = 0;
	while (count != index)
	{
		node = head->next;
		count++;
	}
	if (index > count)
		return (NULL);
	return (node);
}
