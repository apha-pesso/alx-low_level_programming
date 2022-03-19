#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = 0;

			while (j < (size - i))
			{
				_putchar(' ');
				j++;
			}
			k = 0;

			while (k < i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
