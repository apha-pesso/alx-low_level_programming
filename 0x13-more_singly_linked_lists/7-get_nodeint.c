#include "lists.h"

/**
 * get_nodeint_at_index - get node at given index
 * @head: head pointer
 * @index: index of node
 * Return: the index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
