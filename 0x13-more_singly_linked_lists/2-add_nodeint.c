#include "lists.h"

/**
 * add_nodeint - add nodes at the beginnimg
 * @head: address of the head pointer
 * @n: integer to be added
 * Return: return address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
