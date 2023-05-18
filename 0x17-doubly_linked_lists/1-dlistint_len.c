#include "lists.h"
/**
 * dlistint_len - number of elements in list
 * @h: header of list
 * Return: number on list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	current = h;
	count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
