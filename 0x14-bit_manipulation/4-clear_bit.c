#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: given number
 * @index: index to set to 0
 * Return: 1 on success and -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}
