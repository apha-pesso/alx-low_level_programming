#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *first = NULL;

	if (head == NULL)
		return;

	first = *head;
	while (first != NULL)
	{
		temp = first;
		first = first->next;
		free(temp);
	}
	*head = NULL;
}

