#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: head node
 * @index: index node
 * Return: address of index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (0);
	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (0);
}

/**
 * delete_nodeint_at_index - delete at index
 * @head: head
 * @index: index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr = *head;

	if (head == NULL)
		return (-1);
	prev = get_nodeint_at_index(*head, index - 1);
	curr = get_nodeint_at_index(*head, index);
	if (index == 0)
	{
		curr = curr->next;
	}
	else
	{
		prev->next = curr->next;
		curr->next = 0;
	}
	return (1);
}
