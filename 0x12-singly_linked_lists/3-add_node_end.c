#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: head of the link
 * @str: string in linked list
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *temp;
	size_t n;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);

	nnode->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	nnode->len = n;
	nnode->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = nnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nnode;
	}

	return (*head);
}
