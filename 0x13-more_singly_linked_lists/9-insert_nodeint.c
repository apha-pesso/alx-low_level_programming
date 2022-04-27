#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: head pointer
 * @idx: index where new node is added
 * @n: new data to insert
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = NULL, temp = NULL;

	if (head == NULL)
		return (NULL);

	if (idx)
	{
		temp = *head;

		for (i = 0; (i < idx - 1 && (temp != NULL)); i++)
			temp = temp->next

		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
