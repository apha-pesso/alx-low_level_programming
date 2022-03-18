#include "main.h"

/**
 * print_numbers - Prints number from 0-9
 * followed by a new line
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
