#include "search_algos.h"
/**
 * linear_search- Linear search function
 * @array: Given array to search
 * @size: Size of the array
 * @value: Value to search for
 * Return: Return value index on success or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
