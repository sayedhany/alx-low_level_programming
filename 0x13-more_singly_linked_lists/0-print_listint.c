#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print list int
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
