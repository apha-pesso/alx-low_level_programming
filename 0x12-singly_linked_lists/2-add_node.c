#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head of linked list
 * @str: string to add to list
 * Return: addres of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	size_t n;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	nnode->len = n;
	nnode->next = *head;
	*head = nnode;

	return (*head);
}
