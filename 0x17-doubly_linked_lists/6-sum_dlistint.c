#include "lists.h"

/**
 * sum_dlistint- Returns the sum of elements in a list
 * @head: list
 * Return: return 0 for empty list or sum of the list
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
