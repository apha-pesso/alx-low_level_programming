#include "lists.h"
/**
 * print_dlistint - Prints elements in a doubly linked list
 * @h: list
 * Return: Returns number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
