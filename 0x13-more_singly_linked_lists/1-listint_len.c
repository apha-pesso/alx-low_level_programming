#include "lists.h"

/**
 * listint_len - returns number of elemnts in a list
 * @h: head pointer
 * Return: returns numbers of elements
 */


size_t listint_len(const listint_t *h)
{
	size_t en = 0;

	while (h != NULL)
	{
		en++;
		h = h->next;
	}

	return (en);
}
