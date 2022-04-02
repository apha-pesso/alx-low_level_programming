#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 success, 1 for error
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", res);
		return (0);
	}
}
