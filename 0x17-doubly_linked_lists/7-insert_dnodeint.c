#include "lists.h"
/**
 * insert_dnodeint_at_index- inserts node at index
 * @n: element of the node
 * @h: head pointer
 * @idx: position to insert new node
 * Return: Address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	size_t i = 0, j = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if ((*h == NULL) && (idx == 0))
	{
		*h = new;
		(*h)->next = NULL;
		(*h)->prev = NULL;
		return (*h);
	}
	temp = *h;

	while (*h != NULL)
	{
		i++;
		*h = (*h)->next;
	}
	if (idx >= (i + 1))
		return (NULL);
	while (temp != NULL)
	{
		if (idx == j)
		{
			(temp) = new;
			(temp)->prev = new;
			new->prev = (temp)->prev;
			new->next = (temp);
			return (temp);
		}
		j++;
		temp = temp->next;
	}
	return (0);
}
