#include "lists.h"
/**
 * listint_len - length of linked list
 * @h: linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
