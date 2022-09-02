#include "lists.h"

/**
 * add_dnodeint - Adds node at the beginning
 * @head: head point
 * @n: node to be added
 * Return: return address of new node
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		(*head)->prev = new;
		*head = new;
	}
	return (*head);
}
