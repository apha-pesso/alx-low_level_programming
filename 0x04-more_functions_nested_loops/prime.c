#include <stdio.h>

int prime(int n)
{
	int i, h;

	for (i = 2; i <= n; i++)
	{
		for (h = 2; h <= i; h++)
		{
			if (i % h == 0)
			{
				break;
			}
		}
		if (i == h)
		{
			printf("%d is a prime number. \n", i);
		}
	}
	return (0);
}

int main(void)
{
	prime(300);
	return (0);
}
