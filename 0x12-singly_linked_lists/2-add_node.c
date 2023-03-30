#include "lists.h"
#include <stdlib.h>
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

	new_node = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (0);
	s = strdup(str);
	if (dup == NULL)
	{
		free(new_element);
		return (NULL);
	}
	len = strlen(dup);
	new_element->str = dup;
	new_element->len = len;
	new_element->next = *head;

	*head = new;

	return (new);
}
