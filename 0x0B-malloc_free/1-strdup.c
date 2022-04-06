#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to allocated space in memory
 * @str: character to pre-fill space with
 * Return: pointer to space
 */

char *_strdup(char *str)
{
	unsigned int count = 0;
	unsigned int i;
	char *point;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count += 1;
	}
	point = malloc((count + 1) * sizeof(char));
	if (point == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
	{
		point[i] = str[i];
	}
	return (point);
}
