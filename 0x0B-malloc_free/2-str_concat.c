#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Program that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to contents of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int m, i = 0, j = 0, k = 0;
	char *point;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i += 1;

	while (s2[j] != '\0')
		j += 1;

	point = malloc((i + j + 1) * sizeof(char));

	if (point == NULL)
		return (NULL);
	while (k < i)
	{
		point[k] = s1[k];
		k++;
	}
	for (m = 0; m < j; m++, k++)
	{
		point[k] = s2[m];
	}
	return (point);
}
