#include "lists.h"
/**
 * print_dlistint - print number of elements in list
 * @h: header of list
 * Return: number on list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	current = h;
	count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
