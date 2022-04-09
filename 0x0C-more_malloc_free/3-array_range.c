#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: max integer
 * Return: pointer to new array
 */


int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == 0)
		return (NULL);

	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
