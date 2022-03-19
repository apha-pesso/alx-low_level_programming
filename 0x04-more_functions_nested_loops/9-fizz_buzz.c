#include <stdio.h>
#include "main.h"

/**
 * main - prints number from 1 - 100 followed by new line
 * prints fizz for multiples of 3 and buzz for multiples of 5
 * prints fizz Buzz for multiple of 3 and 5
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("Buzz\n");
	return (0);
}
