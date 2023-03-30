#include <stdio.h>
#include <stdlib.h>
#inclide "lists.h"

/**
 * print_list - print list of elements of linked list
 * @h: pointer to linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h->next != NULL)
	{
		printf("%s", h->str);
		h = h->next;
		n++;
	}
	return (n);
}
