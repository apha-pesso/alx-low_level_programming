#include "lists.h"

/**
 * dlistint_len - Returns the number of element in a doubly linked list
 * @h: list
 * Return: Returns number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
