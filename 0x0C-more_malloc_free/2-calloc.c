#include "main.h"
#include <stdlib.h>

/**
 * mset - copy char
 * @s: string
 * @t: input
 * @n: bytes
 * Return: string
 */

char *mset(char *s, char t, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		s[i] = t;

	return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: byte size of the elements
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	mset(str, 0, (nmemb * size));
	return (str);
}
