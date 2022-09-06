#include "main.h"
/**
 * _islower- This is a function that checks for lower case letters
 * @c: c is an ascii character
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

