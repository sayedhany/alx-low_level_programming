#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node
 * @head: head
 * @str: string
 * Return: address on new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int len;
	list_t *new_element;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (0);
	s = strdup(str);
	if (s == NULL)
	{
		free(new_element);
		return (NULL);
	}
	len = strlen(s);
	new_element->str = s;
	new_element->len = len;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}
