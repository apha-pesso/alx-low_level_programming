#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of linked list
 * @head: head pointer
 * @index: index of node
 * Return: 1 for success and -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node = NULL, *next_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = *head->next;
		free(*head);
		*head = next_node;
		return (1);
	}
	node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}

	next_node = node->next;
	node->next = next_node->next;
	free(next_node);
	return (1);
}
