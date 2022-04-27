#include "lists.h"

/**
 * sum_listint - sum the data in a linked list
 * @head: head pointer
 * Return: returns sum and 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0, data = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		data = head->n;
		sum += data;
		head = head->next;
	}

	return (sum);
}
