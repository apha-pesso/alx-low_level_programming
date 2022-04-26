#include "lists.h"

/**
 * print_listint - function to print all elements
 * @h: head element
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
