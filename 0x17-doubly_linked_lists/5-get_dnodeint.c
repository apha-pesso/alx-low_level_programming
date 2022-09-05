#include "lists.h"

/**
 * get_dnodeint_at_index- Gets the node at given index
 * @head: Given list
 * @index: Given index
 * Return: returns node at given index
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t i = 0, j = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (index >= i)
		return (NULL);

	while (head != NULL)
	{
		if (index == j)
			return (head);
		head = head->next;
		j++;
	}
	return (0);
}
