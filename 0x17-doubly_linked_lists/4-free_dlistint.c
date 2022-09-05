#include "lists.h"

/**
 * free_dlistint- Free doubly linked list
 * @head: Doubly linked list
 * Return: 0 on success
 *
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
