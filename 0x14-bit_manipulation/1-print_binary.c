#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number input
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int i;

	i = n;

	if (i < 2)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 1);
	i = i & 1;
	_putchar(i + '0');
}
