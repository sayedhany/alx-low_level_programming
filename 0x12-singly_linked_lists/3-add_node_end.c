#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node end
 * @head: head
 * @str: str
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *node, *last;
	int len;

	node = malloc(sizeof(list_t));
	s = strdup(str);
	if (node == NULL)
		return (0);
	len = strlen(str);
	node->len = len;
	node->str = s;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = node;
	}
	return (*head);
}
