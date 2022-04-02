#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 success, 1 for error
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = argv[1] * argv[2];
		printf("%d\n", res);
		return (0);
	}
}
