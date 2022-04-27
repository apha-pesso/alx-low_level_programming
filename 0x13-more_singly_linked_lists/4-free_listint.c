#include "lists.h"

/**
 * free_listint_t - free a linked list
 * @head: head pointer
 * Return: void
 */

void free_listint_t(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
	head = NULL;
}
