#include "search_algos.h"

/**
 * binary_search- Linear search function
 * @array: Given array to search
 * @size: Size of the array
 * @value: Value to search for
 * Return: Return value index on success or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high, i;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[high]);

		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
