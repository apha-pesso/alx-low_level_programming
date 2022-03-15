#include "main.h"
/**
 * main- This is where the function starts
 * Prints _putchar and a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
