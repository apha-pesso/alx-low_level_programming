#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create an array and initialize to specific char
 * @size: size of the array
 * @c: character to be initialized
 * Return: null if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *point;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	else
	{

		point = malloc(sizeof(char) * size);
		while (i < size)
		{
			point[i] = c;
			i++;
		}
	}
	return (*point);
}
