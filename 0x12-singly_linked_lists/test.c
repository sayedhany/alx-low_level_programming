#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

typedef struct node node;

node *create_node(int value)
{
	node *new_node = malloc(sizeof(node));
	new_node->value = value;
	new_node->next = NULL;
	return new_node;
}
void insert_node(node **head, int value)
{
	node *new_node = create_node(value);
	new_node->next = *head;
	*head = new_node;
}
void print_list(node *head)
{
	while (head != NULL)
	{
		printf("%d ", head->value);
		head = head->next;
	}
	printf("\n");
}

int main(void)
{
	node *head = NULL;
    insert_node(&head, 3);
    insert_node(&head, 2);
    insert_node(&head, 1);
    print_list(head);
    return 0;
}
