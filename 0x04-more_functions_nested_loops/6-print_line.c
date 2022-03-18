#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while n != 0
		{
			_putchar(95);
			n--;
		}
		_putchar('\n');

	}
	else
	{
		_putchar('\n');
	}
}
