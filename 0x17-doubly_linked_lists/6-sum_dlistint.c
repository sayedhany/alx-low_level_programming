#include "lists.h"
/**
 * sum_dlistint - sum data
 * @head: head of list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int sum;

	if (head == NULL)
		return (0);
	curr = head;
	sum = 0;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);

}
