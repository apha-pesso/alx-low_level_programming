#include "main.h"

/**
 * _isupper- This function checks for uppercase
 * @c: c is a letter
 * Return: 1 if it is uppercase
 * and returns 0 if otherwise
 */

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
