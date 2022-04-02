#include <stdio.h>

/**
 * main - This is where the function starts
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
