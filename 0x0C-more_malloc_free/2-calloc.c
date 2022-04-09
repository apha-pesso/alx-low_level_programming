#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: byte size of the elements
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		str[i] = 0;
	return (str);
}
