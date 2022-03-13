#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main- This is the start of the execution
 * The program prints all possible number combination
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			if (n1 >= n2)
				continue;
			putchar(n1 + '0');
			putchar(n2 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
