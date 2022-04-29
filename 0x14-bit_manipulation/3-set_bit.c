#include "main.h"

/**
 * set_bit - setss value of bit to 1
 * @n: given number
 * @index: index to set to 1
 * Return: return 1 on success and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
