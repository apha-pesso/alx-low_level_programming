#include <stdio.h>
/**
 * main- This is the start of the execution
 * Print digits with comma and space
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

