#include <stdio.h>
/**
 * main - Prints the numbers from 0-9
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		printf("%d", ch);
	}
	putchar('\n');
	return (0);
}
