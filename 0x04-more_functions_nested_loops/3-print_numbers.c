#include "main.h"

/**
 * print_number - Prints number from 0-9 
 * followed by a new line
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
