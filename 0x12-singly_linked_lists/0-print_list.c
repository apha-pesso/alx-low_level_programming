#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_list - function to print all element of a list_t list
 * @h: list to be printed
 * Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}

