#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements
 * @h: the linked list
 * Return: returns the number of data
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

