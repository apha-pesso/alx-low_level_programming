#include "main.h"
/**
 * main- This is where the execution starts
 * Function prints the alphabet in lower case
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++
	}
	_putchar('\n');
	return (0);
}
