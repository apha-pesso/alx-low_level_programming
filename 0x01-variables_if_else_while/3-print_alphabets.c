#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch, h;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (h = 'A'; h <= 'Z'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
