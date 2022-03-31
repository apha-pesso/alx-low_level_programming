#include "main.h"

/**
 * _square - returns the root
 * @n: number to be checked
 * @x: square root
 * Return: square root
 */

int _square(int n, int x)
{
	if (n < 1)
	{
		return (-1);
	}
	if ((x * x) > n)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	return (_square(n, (x + 1)));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: the number whose square root is returned
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}
