#include "main.h"
/**
 * main- This is where the execution starts
 * Function prints the alphabet in lower case
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
