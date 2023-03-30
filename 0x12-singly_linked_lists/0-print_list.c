#include "lists.h"

/**
 * print_list - print list of elements of linked list
 * @h: pointer to linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t sum = 0;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		sum += 1;
		ptr = ptr->next;
	}
	return (sum);
}
