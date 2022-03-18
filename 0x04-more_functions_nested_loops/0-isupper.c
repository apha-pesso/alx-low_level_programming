#include "main.h"

/**
 * _isupper- This function checks for uppercase
 * @c: c is a letter
 * Return: 1 if it is uppercase
 * and returns 0 if otherwise
 */

int _isupper(int c);
{
	char c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
