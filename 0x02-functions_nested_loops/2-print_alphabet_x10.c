#include "main.h"
/**
 * print_alphabet_x10- This prints the alphabet in
 * lowercase 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int n = 0;
	while (n < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		n++;
	}
}

