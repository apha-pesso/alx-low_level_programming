#include <stdio.h>
/**
 * main- This is where the funtion starts
 * The program prints all possible combination
 * of 3 digits without repetition
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (!(a == 7 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
