#include "lists.h"

/**
 * print_listint - function to print all elements
 * @h: head element pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numb_of_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb_of_node++;
	}
	return (numb_of_node);
}
