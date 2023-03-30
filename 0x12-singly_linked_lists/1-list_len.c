#include "lists.h"
/**
 * list_len - print length of list
 * @h: linked list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	const size_t *ptr = h;
	size_t count = 0;

	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count)
}
