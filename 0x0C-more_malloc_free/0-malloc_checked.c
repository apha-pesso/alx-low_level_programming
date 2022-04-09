#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: size of memory to be allopcated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *space;

	space = malloc(b);
	if (space == NULL)
		exit(98);
	return (space);
}
